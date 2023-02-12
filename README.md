# OpenFOAM Tutorials Plus
This repository contains several OpenFOAM tutorials, cases and notes.

Here's a brief description:

* **linuxCheatSheet**

  OpenFOAM Linux Cheat Sheet.

* **flatPlate**

  A simple 2D geometry is used to show the development of a turbulent boundary layer. It's an exercise of [Flow over a flat plate - YouTube](https://youtu.be/69Nna1UjICI).

* **magnusEffect**

  A rotating cylinder in free stream to show magnus effect. Gmsh is used to generate mesh.

* **abruptContraction**

  Abrupt contraction of a rectangular channel where cavitation occures. The *blockMeshDict* is written with variables. *interPhaseChangeFoam*, *pisoFoam* and  *pimpleFoam* are used.

* **waterChannel**

  Two-phase open channel flow. It's a fork  of the original interFoam tutorial *waterChannel*. The *surfaces* function is configured to generate water surfaces (namely, the isosurfaces where *alpha.water* is equal to 0.5). 

* **fishChannel**

  A baffled open channel for fish migration in eco-hydraulic engineering. A combination of *blockMesh*, *topoSet*, *createBaffles*, *refineMesh*, *refineWallLayer* etc are used for geometry and mesh generation.

* **cavitatingBullet**

  The simplified version of the original cavitatingBullet case. The initialization process using potentialFoam is removed in this version to show the basic usage of interPhaseChangeFoam. 

* **mpiTest**
 
  Parallel test for clusters using slurm job management tool. It can also be used on other platforms i.e. workstation after small modification. The case is based on damBreak4PhasesFine with multiphaseEulerFoam. 

* **programmingTutorials**

  Basic tutorials to show how to programme within the framework of OpenFOAM. Refer to the README file within the folder.

Pull requests are welcome! Happy foaming!
