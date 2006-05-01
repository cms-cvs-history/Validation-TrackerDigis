#! /bin/csh
eval `scramv1 ru -csh`
cmsRun  trackerdigi.cfg
root -b -p -q  SiPixelDigiCompare.C
root -b -p -q  SiStripDigiCompare.C
