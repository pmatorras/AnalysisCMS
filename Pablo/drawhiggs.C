{
	TString wd="/afs/cern.ch/user/p/pmatorra/";
	TCanvas *cs = new TCanvas("cs","cs",10,10,900,1600);
	//gStyle->SetOptStat(0);

   cs->Divide(1,2,0,0);
	TFile topfile=new TFile("toptotal.root");
	cs->cd(1);


	TH1F *topptll = (TH1F*) topfile.Get("h_ptll");
	topptll->Draw();
	TFile dyfile("dytotal.root");
	cs->cd(2)
	//h_ptll->Draw();
/*
	TTree treetop =(TTree *) topfile.Get("");
	TTree treedy  =(TTree *) dyfile.Get("t");

	THStack *total = new THStack("total", "total");
	total -> Add(top);
	total -> Add(dy);

	TH1* DY    = new TH1F("DY", "DY", 100, 0.0, 200);
	TH1* top = new TH1F("top", "top",100, 0.0, 200);
	DY -> SetFillColor(kRed);
	DY -> SetLineColor(kRed);
	//fill
	treeDY    -> Project("DY", "ptll","mll<200");
	treetop -> Project("top", "ptll","mll<200");

	TCanvas *cs = new TCanvas("cs","cs",10,10,700,900);
	cs -> cd(1);
*/
	total->Draw();
	cs->Modified();

}
