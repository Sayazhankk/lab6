from math import sqrt

import numpy as np
from scipy import ndimage as ndi

STREL_4 = ...
STREL_8 = ...

# Coefficients from
# Ohser J., Nagel W., Schladitz K. (2002) The Euler Number of Discretized Sets
# - On the Choice of Adjacency in Homogeneous Lattices.
# In: Mecke K., Stoyan D. (eds) Morphology of Condensed Matter. Lecture Notes
# in Physics, vol 600. Springer, Berlin, Heidelberg.
# The value of coefficients correspond to the contributions to the Euler number
# of specific voxel configurations, which are themselves encoded thanks to a
# LUT. Computing the Euler number from the addition of the contributions of
# local configurations is possible thanks to an integral geometry formula
# (see the paper by Ohser et al. for more details).
EULER_COEFS2D_4: list = ...
EULER_COEFS2D_8: list = ...
EULER_COEFS3D_26 = ...

def euler_number(image, connectivity: int | None = None) -> int: ...
def perimeter(image, neighbourhood=4) -> float: ...
def perimeter_crofton(image, directions=4) -> float: ...
