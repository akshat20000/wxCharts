#ifndef _WX_CHARTS_WXLINECHARTDATASET_H_
#define _WX_CHARTS_WXLINECHARTDATASET_H_

#include "wxchartsdataset.h"
#include "wxchartsdoubledataset.h"  // Include the double dataset header
#include <wx/vector.h>
#include <wx/colour.h>

class wxLineChartDataset : public wxChartsDataset {
    public:
        wxLineChartDataset(wxChartsDoubleDataset::ptr data, 
                          const wxColor& color)
            : wxChartsDataset(data->GetLabel()),
              m_data(data),
              m_color(color) {}

    // Delegate data access to the composed double dataset
    const wxVector<double>& GetData() const { return m_data->GetData(); }
    const wxColor& GetColor() const { return m_color; }

    // Expose the underlying double dataset if needed
    wxChartsDoubleDataset::ptr GetDoubleDataset() const { return m_data; }

private:
    wxChartsDoubleDataset::ptr m_data;  // Composition over inheritance
    wxColor m_color;
};

#endif // _WX_CHARTS_WXLINECHARTDATASET_H_