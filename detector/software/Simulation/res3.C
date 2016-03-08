{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Mar 15 22:31:21 2010) by ROOT version5.18/00
   TCanvas *c1 = new TCanvas("c1", "c1",80,26,530,530);
   gStyle->SetOptStat(0);
   gStyle->SetOptFit(0);
   gStyle->SetOptDate(0);
   c1->Range(-114.5585,-0.5767319,832.4582,4.199013);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx();
   c1->SetTicky();
   c1->SetGridx(0);
   c1->SetGridy(0);
   c1->SetLeftMargin(0.17);
   c1->SetRightMargin(0.05);
   c1->SetTopMargin(0.05);
   c1->SetBottomMargin(0.12);
   c1->SetFrameFillColor(10);
   c1->SetFrameBorderMode(0);
   c1->SetFrameFillColor(10);
   c1->SetFrameBorderMode(0);
   
   TH1 *hframe2 = new TH1D("hframe2","",11,200,11000);
   hframe2->SetMinimum(0);
   hframe2->SetMaximum(0.06);
   hframe2->SetStats(0);
   hframe2->GetXaxis()->SetTitle("p_{e} (MeV)");
   hframe2->GetXaxis()->SetLabelSize(0.05);
   hframe2->GetXaxis()->SetTitleSize(0.05);
   hframe2->GetXaxis()->SetTitleOffset(1.1);
   hframe2->GetYaxis()->SetTitle("#sigma (E/p)");
   hframe2->GetYaxis()->SetLabelSize(0.05);
   hframe2->GetYaxis()->SetTitleSize(0.05);
   hframe2->GetYaxis()->SetTitleOffset(1.6);
   hframe2->Draw("");
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,500,0.02692336);
   gre->SetPointError(0,0,0.0008539571);
   gre->SetPoint(1,1000,0.01949595);
   gre->SetPointError(1,0,0.0006171335);
   gre->SetPoint(2,2000,0.01427334);
   gre->SetPointError(2,0,0.0004518146);
   gre->SetPoint(3,3000,0.01164766);
   gre->SetPointError(3,0,0.0003687001);
   gre->SetPoint(4,4000,0.01062256);
   gre->SetPointError(4,0,0.0003362512);
   gre->SetPoint(5,5000,0.009015343);
   gre->SetPointError(5,0,0.0002853757);
   gre->SetPoint(6,6000,0.00915114);
   gre->SetPointError(6,0,0.0002896743);
   gre->SetPoint(7,7000,0.008943425);
   gre->SetPointError(7,0,0.0002830992);
   gre->SetPoint(8,8000,0.008740726);
   gre->SetPointError(8,0,0.0002766828);
   gre->SetPoint(9,9000,0.008959848);
   gre->SetPointError(9,0,0.000283619);
   gre->SetPoint(10,10000,0.007740668);
   gre->SetPointError(10,0,0.0002450265);
   gre->Draw("p");
   
   TF1 *func5 = new TF1("func5","(0.274*(x-21)/x)*(0.08*31.623/sqrt(x))",200,11000);
   func5->SetFillColor(19);
   func5->SetFillStyle(0);
   func5->SetLineWidth(3);
   func5->Draw("same");
   
   TLatex *   tex = new TLatex(4300,0.042,"EC resolution in gemc");
   tex->SetTextSize(0.04960318);
   tex->SetLineWidth(2);
   tex->Draw();
   TLatex *   tex = new TLatex(4300,0.037,"Blue - E_{dep} > 1 MeV");
   tex->SetTextSize(0.04960318);
   tex->SetLineWidth(2);
   tex->Draw();
   tex = new TLatex(4300,0.032,"#sigma #sqrt{E} = 0.08");
   tex->SetTextSize(0.04748338);
   tex->SetLineWidth(2);
   tex->Draw();
   TArrow *arrow = new TArrow(4321.091,0.03127493,1669.83,0.01996175,0.03,"|>");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetAngle(30);
   arrow->Draw();

   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
   c1->ToggleToolBar();
}
