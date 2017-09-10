# OpenFOAM Tutorials Plus
This repository contains several OpenFOAM tutorials, cases and notes.

Here's a brief description:

* **linuxCheatSheet**

  OpenFOAM Linux Cheat Sheet.

* **flatPlate**

  A simple 2D geometry is used to show the development of a turbulent boundary layer. It's an exercise of [Flow over a flat plate - YouTube](https://youtu.be/69Nna1UjICI).

* **abruptContraction**

  Abrupt contraction of a rectangular channel where cavitation occures. The *blockMeshDict* is written with variables. *interPhaseChangeFoam*, *pisoFoam* and  *pimpleFoam* are used.

* **abruptContractionPar**

  Parallel edition of abruptContraction.

* **waterChannel**

  Two-phase open channel flow. It's a fork  of the original interFoam tutorial *waterChannel*. The *surfaces* function is configured to generate water surfaces (namely, the isosurfaces where *alpha.water* is equal to 0.5). 

* **programmingTutorials**

  Basic tutorials to show how to programme within the framework of OpenFOAM. Refer to the README file within the folder. 

Pull requests are welcome! Happy foaming!
