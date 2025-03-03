#include "wx/charts/wxlinechartdataset.h"

wxLineChartDataset::wxLineChartDataset(wxChartsDoubleDataset::ptr data, 
  const wxColor& color)
: wxChartsDataset(data->GetLabel()),  // Use the correct constructor
m_data(data),
m_color(color) {}

const wxVector<double>& wxLineChartDataset::GetData() const
{
    return m_data->GetData();
}
