#ifndef _WX_CHARTS_WXLINECHARTDATASET_H_
#define _WX_CHARTS_WXLINECHARTDATASET_H_

#include <wx/charts/wxchartdataset.h>
#include <wx/vector.h>

class wxLineChartDataset : public wxChartDataset
{
public:
    wxLineChartDataset(const wxString& label, 
                       const wxVector<double>& data, 
                       const wxColor& color);

    const wxVector<double>& GetData() const;
    
private:
    wxVector<double> m_data;
};

#endif // _WX_CHARTS_WXLINECHARTDATASET_H_
