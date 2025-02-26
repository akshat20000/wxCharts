#include "wx/charts/wxlinechartdataset.h"

wxLineChartDataset::wxLineChartDataset(const wxString& label, 
                                       const wxVector<double>& data, 
                                       const wxColor& color)
    : wxChartDataset(label, color), m_data(data) {}

const wxVector<double>& wxLineChartDataset::GetData() const
{
    return m_data;
}
