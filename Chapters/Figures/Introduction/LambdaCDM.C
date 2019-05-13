void LambdaCDM()
{
   Float_t vals[] = {0.729, 0.226, 0.0451};
   Int_t colors[] = {P0DBANFFInterface::kcbBlue, P0DBANFFInterface::kcbGreen, P0DBANFFInterface::kcbSky};
   //Int_t colors[] = {kBlue, kGreen, kViolet};
   char* labels[] = {"Dark Energy", "Dark Matter", "Baryons"};
   //char* labels[] = {"Dark Energy (72.9%)", "Dark Matter (22.6%)", "Baryons (4.51%)"};
   Int_t nvals = sizeof(vals)/sizeof(vals[0]);
   TCanvas *cpie = new TCanvas("cpie","TPie test",800,800);
   TPie *pie3 = new TPie("pie3","",nvals,vals,colors);
   cpie->cd();
   //pie3->SetY(.32);
   //pie3->GetSlice(1)->SetFillStyle(3031);
   //pie3->SetLabelsOffset(-.1);
   //pie3->Draw("3d");
   for(Int_t i = 0; i < nvals; ++i) pie3->SetEntryLabel(i, labels[i]);
   for(Int_t i = 0; i < nvals; ++i) pie3->GetSlice(i)->SetFillColor(colors[i]);
   for(Int_t i = 0; i < nvals; ++i) pie3->GetSlice(i)->SetLineWidth(3);
   //TLegend *pieleg = pie3->MakeLegend();
   //TPie *pieclone = new TPie(*pie3);
   //for(Int_t i = 0; i < nvals; ++i) pie3->SetEntryLabel(i, "");
   pie3->SetLabelFormat("#splitline{%txt}{%perc}");
   pie3->Draw("nol <");
   //pieleg->SetBorderSize(0);
   //pieleg->SetFillColor(0);
   //pieleg->SetFillStyle(0);
   //pieleg->SetLineWidth(0);
   //pieleg->Draw();
   //pieleg->SetY1(.56); pieleg->SetY2(.86);
}
