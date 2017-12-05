## Basic OpenFOAM programming tutorials

These tutorials show beginners how to programme within the framework of OpenFOAM.

The original edition is created by Artur K Lidtke. The current branch was forked from [BasicOpenFOAMProgrammingTutorials](https://github.com/UnnamedMoose/BasicOpenFOAMProgrammingTutorials) and integrated with [OpenFOAM Tutorials Plus](https://github.com/phresher/OpenFOAM_Tutorials_Plus).

To get started, read and run the Allrun script in each folder. 

The tutorials have been most recently tested on the official OpenFOAM 5.0 version.

### Tutorial 0 - helloWorld

Presents a basic OpenFOAM executable which prints a simple, yet important,
message.

### Tutorial 1 - basicIO

Shows how to read information from dictionaries and output it into files.

### Tutorial 2 - understandingTheMesh

Discusses how the OpenFOAM mesh description works and introduces the code
interface used to interact with the grid.

### Tutorial 3 - basicFieldOperations

Introduces the idea of a field object, reading values from OF-native files
using built-in operators, as well as calculating field values by hand.

### Tutorial 4 - basicParallelComputing

Gives a crash-course introduction to parallel computing with OpenFOAM and
OpenMPI based on the example "solver" developed in Tutorial 2. The way
OpenFOAM handles parallel domain decomposition is described, basic operators
used for communication between parallel nodes are shown, and the basic solver
is upgraded to work in parallel.

### Tutorial 5 - customClasses

Shows how a new class may be added to expand OpenFOAM functionality, as well
as gives an example implementation of a class derived from and OpenFOAM
object. This is done by extending from the IOdictionary, with the aim of
adding a custom method which lists the contents of the dict file, while keeping
all of the baseline functionality.

### Tutorial 6 - customLibraries

Shows how an external library may be compiled and added to OpenFOAM. This is
done by moving the key functionality of the "solver" from Tutorials 2 and 3
into an independent library, and then linking that against the rest of the
solver code.

### Tutorial 7 - customBC

Shows how a custom boundary condition may be implemented.
It does not introduce a bespoke utility, but instead only implements a
library. This defines an inlet condition that allows a boundary layer
profile to be prescribed at the inlet of a pipe.

The BC is implemented as a class derived from the fixedValue boundary
condition, adding several control parameters allowing the inlet profile
to be customised. Key elements of the code are highlighted with the keyword
NOTE:. Key methods to pay attention to are the two constructors, default
and one constructing the BC from string, and .updateCoeffs().

The test case is a straight pipe, flow through which gets solved with the
basic simpleFoam solver. Key things to note are the definition of the
BC in 0.org/U and the incorporation of a custom library in system/controlDict.
The simulation is 3D RANS on a coarse mesh so it takes a few minutes on
a low-end machine. The effect of the boundary condition may be visualised
by plotting the x-velocity through the pipe and noting the incident boundary
layer profile at the inlet and how it affects the solution.

### Tutorial 8 - transportEquation

Introduces the concepts behind solving a simple scalar transport equation.

The solver sets up the transport problem by importing a fixed velocity field
from the last time step and solving the transport of a scalar, beta, in the
presence of the velocity, beta being also subject to diffusion characterised
by a fixed proportionality constant, gamma. The solver is conceptually similar
to the built-in scalarTransportFoam, except it solves a steady-state problem.
Key things to note are 1) the syntax behind the scalar transport equation
2) how OpenFOAM translates the syntax into specific operations and associates
them with entries in system/fvSolution and system/fvSchemes dictionaries
3) inclusion of the boundary condition definitions in 0/beta into the equation
4) units of the equations being solved and how OpenFOAM handles them.

The test case is a simple 2D square domain with fixed scalar inlets at the bottom
and the left-hand side. Transport takes place in the presence of a velocity
field convecting away from the beta inlets. Once the case is run, it is best
to visualise the initial conditions in the "beta" field and the solution to the
transport equation saved as the "result" field.
