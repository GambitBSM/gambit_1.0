How to scan the SingletDM model with multinest and plot the results
===================================================================


Install gambit with mutlinest
-----------------------------

The usual thing.  Just create a modules/build directory and run

    cmake ..
    make multinest
    cmake ..
    make -j5
    make backends

If this does not work as planned, please contact me.


Run scan
--------

The scan can then be invoked with

    ./gambit -f gambit_SingletDM_multinest.yml

If everything well, the results should end up in

    runs/singletDM_multinest/samples/

These results include the usual mutlinest output files, as well as the list of
all evaluated points.  The latter is here simply 

    gambit_output.data
    gambit_output.data_info

with the second file explaining the format of the first file.

If you want to do a run on multiple MPI nodes, run instead

    mpirun -n 4 ./gambit -f gambit_SingletDM_multinest.yml

(for e.g. 4 nodes).  This produces instead output files

    gambit_output.data_0
    gambit_output.data_1
    gambit_output.data_2
    gambit_output.data_3

which have to be merged, e.g. with cat, into one file.  With linux bash, this
works:

    cat gambit_output.data_{0,1,2,3,4} > gambit_output.data


Make plot
---------

In principle one can use the multinest output files to make plots about the
statistical output of the scan.  However, when just plotting likelihood
contours (in a 2-dim model), it seems easier to use the list of all evalulated
points directly.

There is a simple python script that produces such plots in the modules/ folder
(`plot_ascii_printer_results.py`).  Simply running the file should already
produce the desired output.pdf.  The code interpolates between the irregular
grid in the 2-dim model parameter space of SingletDM.


It does not work
----------------

In this (not too unlikely) case, please contact: c.weniger@uva.nl

