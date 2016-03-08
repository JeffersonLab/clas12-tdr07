#!/bin/csh -f
#setenv TEXINPUTS ".:../:/usr/share/texmf/tex//"
ln -s ../physics/main/executive_summary.tex .
ln -s ../physics/main/*.ps .
ln -s ../physics/main/*.eps .
ln -s ../physics/pac30/*.eps .
ln -s ../physics/pac30/*.ps ./
cd ..
ln -s physics/[a-z]* .
ln -s physics/S* .
ln -s detector/outer/preshower preshower
ln -s detector/daq_trigger .
cd master
ln -s ../detector/performance/*.tex .
ln -s ../detector/performance/*.eps .
ln -s ../detector/performance/*.ps .
ln -s ../detector/daq_trigger/*.eps* .
ln -s ../detector/outer/htcc/Youri .
ln -s ../detector/outer/htcc/MC-simulation .
ln -s ../detector/outer/htcc/Magnetic-shielding .
ln -s ../detector/outer/htcc/safety .
ln -s ../detector/outer/htcc/PMT-studies .
ln -s ../detector/outer/htcc/Mechanical .
ln -s ../detector/outer/htcc/qual*.tex
ln -s ../detector/outer/dc/*.ps* .
ln -s ../detector/outer/dc/*.eps* .
ln -s ../detector/outer/dc/svtfigs/*.eps* .
ln -s ../detector/outer/dc/svtfigs/*.ps* .
ln -s ../detector/outer/dc/recon/*.eps* .
ln -s ../detector/outer/dc/tracking_tdr.tex .
ln -s ../detector/outer/tof/*.ps* .
ln -s ../detector/outer/tof/*.eps* .
ln -s ../detector/outer/tof/ftof.tex .
ln -s ../detector/beamline/intro.tex .
ln -s ../detector/beamline/target/tex .
ln -s ../detector/beamline/target/epsfiles .
ln -s ../detector/beamline/moller/*.* .
ln -s ../detector/beamline/other/otherbm.tex .
ln -s ../detector/central/ctof/*.tex .
ln -s ../detector/central/ctof/*.gz .
ln -s ../detector/central/ctof/*.eps .
ln -s ../detector/central/ctof/*.ps .
ln -s ../detector/optional/*.tex .
ln -s ../detector/optional/*.ps .
ln -s ../detector/optional/*.eps .
ln -s ../detector/software/offline_tdr.tex .
ln -s ../detector/software/CLARA/*.eps .
ln -s ../detector/software/Services/*.eps .
ln -s ../detector/software/Simulation/*.eps .
ln -s ../detector/software/Simulation/*.ps .
ln -s ../detector/software/fastmc/*.eps .
ln -s ../detector/software/pid/*.eps .
ln -s ../detector/infrastructure/infrastructure.tex .
ln -s ../detector/infrastructure/*.eps .
ln -s ../detector/infrastructure/*.ps .
ln -s ../detector/collab/participation.tex .
ln -s ../detector/commissioning/commission.tex .

latex master.tex
latex master.tex
dvips -t letter master.dvi -omaster.ps
cp master.ps master.txt

rm executive_summary.tex
rm Youri
rm MC-simulation
rm Magnetic-shielding 
rm PMT-studies
rm Mechanical
rm -rf ../der ../formfactors ../main ../nuclear ../pac30 ../sidis ../Spectroscopy ../strucfunc
rm -rf ../preshower
rm -rf ../htcc
rm *.ps* *.eps*
rm ftof.tex
rm tex
rm epsfiles
rm ../daq_trigger
rm *.gz
rm ctof.tex STAGESbibl.tex STAGESt0CLAS12.tex tables.tex t0clas12llg_figures.tex
rm tracking_tdr.tex infrastructure.tex participation.tex
rm design_overview.tex
rm ctofworkplan291107.tex
rm quality_safety.tex
rm moeller.tex
rm optional.tex
rm otherbm.tex
rm intro.tex
rm commission.tex
rm ctofmagshield*.tex
rm offline_tdr.tex

rm safety

mv master.txt master.ps


