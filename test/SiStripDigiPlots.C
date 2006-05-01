void SiStripDigiPlots()
{

 gROOT ->Reset();
 char*  rfilename = "stripdigihisto.root";

 delete gROOT->GetListOfFiles()->FindObject(rfilename);

 TText* te = new TText();
 TFile * rfile = new TFile(rfilename);

 rfile->cd("DQMData");
 gDirectory->ls();

Char_t histo[200];

// TIB
 
 if (1) {
  TCanvas * Strip = new TCanvas("Strip","Strip",1000,1000);
   Strip->Divide(2,2);

   TH1* meAdcTIB_[4];

   for (Int_t i=0; i<4; i++){
      sprintf(histo,"DQMData/adc_tib_%d_zm;1",i+1);
      rfile->GetObject(histo ,meAdcTIB_[i]);
      meAdcTIB_[i];
      Strip->cd(i+1);
      meAdcTIB_[i]->Draw();
   }

   Strip->Print("AdcOfStripTIB_ZM.eps"); 
 }

 if (1) {
  TCanvas * Strip = new TCanvas("Strip","Strip",800,1000);
   Strip->Divide(1,3);

   TH1* meStripTIB_[3];

   for (Int_t i=0; i<3; i++){
      sprintf(histo,"DQMData/strip_tib_%d_zm;1",i+1);
      rfile->GetObject(histo ,meStripTIB_[i]);
      meStripTIB_[i];
      Strip->cd(i+1);
      meStripTIB_[i]->Draw();
   }

   Strip->Print("StripNumOfStripTIB_ZM.eps");
 }

 if (1) {
  TCanvas * Strip = new TCanvas("Strip","Strip",1000,1000);
   Strip->Divide(2,2);

   TH1* meAdcTIB_[4];

   for (Int_t i=0; i<4; i++){
      sprintf(histo,"DQMData/adc_tib_%d_zp;1",i+1);
      rfile->GetObject(histo ,meAdcTIB_[i]);
      meAdcTIB_[i];
      Strip->cd(i+1);
      meAdcTIB_[i]->Draw();
   }

   Strip->Print("AdcOfStripTIB_ZP.eps");
 }

 if (1) {
  TCanvas * Strip = new TCanvas("Strip","Strip",1000,1000);
   Strip->Divide(2,2);

   TH1* meStripTIB_[4];

   for (Int_t i=0; i<4; i++){
      sprintf(histo,"DQMData/strip_tib_%d_zp;1",i+1);
      rfile->GetObject(histo ,meStripTIB_[i]);
      meStripTIB_[i];
      Strip->cd(i+1);
      meStripTIB_[i]->Draw();
   }

   Strip->Print("StripNumOfStripTIB_ZP.eps");
 }

/*
 if (1) {
  TCanvas * Strip = new TCanvas("Strip","Strip",1000,1000);
   Strip->Divide(2,2);

   TH1* meNdigiTIB_[4];

   for (Int_t i=0; i<4; i++){
      sprintf(histo,"DQMData/ndigi_tib_layer_%d_zm;1",i+1);
      rfile->GetObject(histo ,meNdigiTIB_[i]);
      meNdigiTIB_[i];
      Strip->cd(i+1);
      meNdigiTIB_[i]->Draw();
   }

   Strip->Print("NdigiTIB_ZP.eps");
 }
*/
// TOB
 if(1) {
   TCanvas * Strip = new TCanvas("Strip","Strip",800,1000);
   Strip->Divide(2,3);

   TH1* meAdcTOB_[6];

   for (Int_t i=0; i<6; i++){
      sprintf(histo,"DQMData/adc_tob_%d_zm;1",i+1);
      rfile->GetObject(histo ,meAdcTOB_[i]);
      meAdcTOB_[i];
      Strip->cd(i+1);
      meAdcTOB_[i]->Draw();
   }
   Strip->Print("AdcOfStripTOB_ZM.eps");
 }

 if (1) {
  TCanvas * Strip = new TCanvas("Strip","Strip",800,1000);
   Strip->Divide(2,3);
   TH1* meStripTOB_[6];

   for (Int_t i=0; i<6; i++){
      sprintf(histo,"DQMData/strip_tob_%d_zm;1",i+1);
      rfile->GetObject(histo ,meStripTOB_[i]);
      meStripTOB_[i];
      Strip->cd(i+1);
      meStripTOB_[i]->Draw();
   }

   Strip->Print("StripNumOfStripTOB_ZM.eps");
 }

 
if(1) {
   TCanvas * Strip = new TCanvas("Strip","Strip",800,1000);
   Strip->Divide(2,3);

   TH1* meAdcTOB_[6];

   for (Int_t i=0; i<6; i++){
      sprintf(histo,"DQMData/adc_tob_%d_zp;1",i+1);
      rfile->GetObject(histo ,meAdcTOB_[i]);
      meAdcTOB_[i];
      Strip->cd(i+1);
      meAdcTOB_[i]->Draw();
   }
   Strip->Print("AdcOfStripTOB_ZP.eps");
 }

 if (1) {
  TCanvas * Strip = new TCanvas("Strip","Strip",800,1000);
   Strip->Divide(2,3);
   TH1* meStripTOB_[6];

   for (Int_t i=0; i<6; i++){
      sprintf(histo,"DQMData/strip_tob_%d_zp;1",i+1);
      rfile->GetObject(histo ,meStripTOB_[i]);
      meStripTOB_[i];
      Strip->cd(i+1);
      meStripTOB_[i]->Draw();
   }

   Strip->Print("StripNumOfStripTOB_ZP.eps");
 }


//TID
   if (1) {
   TCanvas * Strip = new TCanvas("Strip","Strip",800,1000);
   Strip->Divide(1,3);
   TH1* meAdcTID_[3];

   for (Int_t i=0; i<3; i++){
      sprintf(histo,"DQMData/adc_tid_%d_zm;1",i+1);
      rfile->GetObject(histo ,meAdcTID_[i]);
      meAdcTID_[i];
      Strip->cd(i+1);
      meAdcTID_[i]->Draw();
   }

   Strip->Print("AdcOfStripTID_ZM.eps");
   }

   if (1) {
   TCanvas * Strip = new TCanvas("Strip","Strip",800,1000);
   Strip->Divide(1,3);
   TH1* meStripTID_[3];

   for (Int_t i=0; i<3; i++){
      sprintf(histo,"DQMData/strip_tid_%d_zm;1",i+1);
      rfile->GetObject(histo ,meStripTID_[i]);
      meStripTID_[i];
      Strip->cd(i+1);
      meStripTID_[i]->Draw();
   }

   Strip->Print("StripNumOfStripTID_ZM.eps");
   }

   if (1) {
   TCanvas * Strip = new TCanvas("Strip","Strip",800,1000);
   Strip->Divide(1,3);
   TH1* meAdcTID_[3];

   for (Int_t i=0; i<3; i++){
      sprintf(histo,"DQMData/adc_tid_%d_zp;1",i+1);
      rfile->GetObject(histo ,meAdcTID_[i]);
      meAdcTID_[i];
      Strip->cd(i+1);
      meAdcTID_[i]->Draw();
   }

   Strip->Print("AdcOfStripTID_ZP.eps");
   }

   if (1) {
   TCanvas * Strip = new TCanvas("Strip","Strip",800,1000);
   Strip->Divide(1,3);
   TH1* meStripTID_[3];

   for (Int_t i=0; i<3; i++){
      sprintf(histo,"DQMData/strip_tid_%d_zp;1",i+1);
      rfile->GetObject(histo ,meStripTID_[i]);
      meStripTID_[i];
      Strip->cd(i+1);
      meStripTID_[i]->Draw();
   }

   Strip->Print("StripNumOfStripTID_ZP.eps");
   }

//IEC
   if (1) {
   TCanvas * Strip = new TCanvas("Strip","Strip",1000,1000);
   Strip->Divide(3,3);
   TH1* meAdcTEC_[9];

   for (Int_t i=0; i<9; i++){
      sprintf(histo,"DQMData/adc_tec_%d_zm;1",i+1);
      rfile->GetObject(histo ,meAdcTEC_[i]);
      meAdcTEC_[i];
      Strip->cd(i+1);
      meAdcTEC_[i]->Draw();
   }

   Strip->Print("AdcOfStripTEC_ZM.eps");
   } 

   if (1) {
   TCanvas * Strip = new TCanvas("Strip","Strip",1000,1000);
   Strip->Divide(3,3);
   TH1* meStripTEC_[9];

   for (Int_t i=0; i<9; i++){
      sprintf(histo,"DQMData/strip_tec_%d_zm;1",i+1);
      rfile->GetObject(histo ,meStripTEC_[i]);
      meStripTEC_[i];
      Strip->cd(i+1);
      meStripTEC_[i]->Draw();
   }

   Strip->Print("StripNumOfStripTEC_ZM.eps");
   }

   if (1) {
   TCanvas * Strip = new TCanvas("Strip","Strip",1000,1000);
   Strip->Divide(3,3);
   TH1* meAdcTEC_[9];

   for (Int_t i=0; i<9; i++){
      sprintf(histo,"DQMData/adc_tec_%d_zp;1",i+1);
      rfile->GetObject(histo ,meAdcTEC_[i]);
      meAdcTEC_[i];
      Strip->cd(i+1);
      meAdcTEC_[i]->Draw();
   }

   Strip->Print("AdcOfStripTEC_ZP.eps");
   }

   if (1) {
   TCanvas * Strip = new TCanvas("Strip","Strip",1000,1000);
   Strip->Divide(3,3);
   TH1* meStripTEC_[9];

   for (Int_t i=0; i<9; i++){
      sprintf(histo,"DQMData/strip_tec_%d_zp;1",i+1);
      rfile->GetObject(histo ,meStripTEC_[i]);
      meStripTEC_[i];
      Strip->cd(i+1);
      meStripTEC_[i]->Draw();
   }

   Strip->Print("StripNumOfStripTEC_ZP.eps");
   }

}

