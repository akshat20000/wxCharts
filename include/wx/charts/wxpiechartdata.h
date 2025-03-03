#ifndef WX_PIECHARTDATA_H
#define WX_PIECHARTDATA_H

#include "wxcharts.h"
#include "wxdoughnutandpiechartbase.h"
#include <wx/colour.h>
#include <vector>
#include <string>
#include <memory>
#include <map>

// ✅ Class representing an individual slice of the pie chart
class wxPieChartSliceData {
public:
    wxPieChartSliceData(const wxString& label, double value, const wxColour& colour)
        : m_label(label), m_value(value), m_colour(colour) {}

    wxString GetLabel() const { return m_label; }
    double GetValue() const { return m_value; }
    wxColour GetColour() const { return m_colour; }

private:
    wxString m_label;
    double m_value;
    wxColour m_colour;
};

// ✅ Class representing pie chart data (without observer functionality)
class MyPieChartData {
public:
    using ptr = std::shared_ptr<MyPieChartData>;

    MyPieChartData() {}

    void AppendSlice(const wxPieChartSliceData& slice) {
        // ✅ Convert wxPieChartSliceData to wxChartSliceData correctly
        m_slices[slice.GetLabel()] = wxChartSliceData(
            slice.GetValue(),  // Value (double)
            slice.GetColour(), // Color (wxColour)
            slice.GetLabel()   // Label (wxString)
        );

        // ❌ Removed NotifyObservers() since wxChartObservableValue doesn't exist
    }

    const std::map<wxString, wxChartSliceData>& GetSlices() const {
        return m_slices;
    }

private:
    std::map<wxString, wxChartSliceData> m_slices;
};

#endif // WX_PIECHARTDATA_H
