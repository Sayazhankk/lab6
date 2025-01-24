from contextlib import contextmanager
from typing import Any, Callable, Generator
from typing_extensions import Self

from sympy.core.basic import Basic
from sympy.logic.boolalg import Boolean

class AssumptionsContext(set):
    def add(self, *assumptions) -> None: ...

global_assumptions = ...

class AppliedPredicate(Boolean):
    __slots__ = ...
    def __new__(cls, predicate, *args) -> Self: ...
    @property
    def arg(self) -> Basic: ...
    @property
    def function(self) -> Basic: ...
    @property
    def arguments(self) -> tuple[Basic, ...]: ...
    @property
    def binary_symbols(self) -> set[Basic] | set[Any]: ...

class PredicateMeta(type):
    def __new__(cls, clsname, bases, dct) -> Self:  # type: ignore
        ...
    @property
    def __doc__(cls): ...

class Predicate(Boolean, metaclass=PredicateMeta):
    is_Atom = ...
    def __new__(cls, *args, **kwargs) -> UndefinedPredicate | Self: ...
    @property
    def name(self) -> str: ...
    @classmethod
    def register(cls, *types, **kwargs): ...
    @classmethod
    def register_many(cls, *types, **kwargs) -> Callable[..., None]: ...
    def __call__(self, *args) -> AppliedPredicate: ...
    def eval(self, args, assumptions=...) -> None: ...

class UndefinedPredicate(Predicate):
    handler = ...
    def __new__(cls, name, handlers=...) -> Self: ...
    @property
    def name(self) -> Basic: ...
    def __getnewargs__(self) -> tuple[Basic]: ...
    def __call__(self, expr) -> AppliedPredicate: ...
    def add_handler(self, handler) -> None: ...
    def remove_handler(self, handler) -> None: ...
    def eval(self, args, assumptions=...) -> Any | None: ...

@contextmanager
def assuming(*assumptions) -> Generator[None, Any, None]: ...
