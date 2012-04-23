import FWCore.ParameterSet.Config as cms

pixelDigisValid = cms.EDAnalyzer("SiPixelDigiValid",
    src = cms.InputTag("mix", "simSiPixelDigis"),
    outputFile = cms.untracked.string('')
)



