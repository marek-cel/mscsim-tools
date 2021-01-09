# mscsim-tools
Miscellaneous tools for [MScSim](http://marekcel.pl/mscsim) flight simulation software.

This is collection of small tools and utilities used with flight simulation software as aircraft characteristics approximation and estimation tools, generators and editors of various input data.

## mscsim-aero
Aerodynamic characteristics (drag coefficient and lift coefficient) approximation tool for the full range of angle of attack, based on [NASA TM-102267](https://ntrs.nasa.gov/citations/19910009728).

## mscsim-aptgen
Airports 3D model generator. This tool generate airport facilities 3D models including runways and taxiways lighting and signs based on a number of various parameters.

## mscsim-asm3d
[OpenSceneGraph](http://www.openscenegraph.org/) 3D models assembler tool. This tool generates OpenSceneGraph compliant 3D models assembled from submodels like control surfaces, landing gear elements, etc. It can also enrich such a model with generic features like fully articulated helicopter rotor, runways and taxiways lighting systems, visual approach aids.

Runway Approach Lighting System (RALS) types include:

* Approach Lighting System with Flashing Lights (ALSF-I and ALSF-II)
* Medium Intensity Approach Lighting System (MALS)
* Medium Intensity Approach Lighting System with Sequenced Flashing Lights (MALSF)
* Medium Intensity Approach Lighting System with Runway Alignment Indicator Lights (MALSR)
* Luch-2MU SSP-1

Visual Glide Slope Indicator (VGSI) types include:

* Precision Approach Path Indicator (PAPI) P4
* Visual Approach Slope Indicator (VASI) V4
* Visual Approach Slope Indicator (VASI) V6
* Fresnel Lens Optical Landing System (FLOLS) - so called meatball

## mscsim-fgrec
[FlightGear](https://www.flightgear.org/) flight parameters recording tool.

## mscsim-mass
Aircraft mass characteristics (empty mass, center of mass and inertia tensor) estimation tool, which uses formulas from [Raymer D.P. Aircraft Design: A Conceptual Approach](http://doi.org/10.2514/4.104909) and [NASA TP-2015-218751](https://ntrs.nasa.gov/citations/20150021267).
