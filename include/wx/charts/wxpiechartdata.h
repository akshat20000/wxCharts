#ifndef WXPIECHARTDATA_H
#define WXPIECHARTDATA_H

#include <wx/charts/wxcharts.h>
#include <wx/colour.h>
#include <vector>
#include <string>

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

class wxPieChartData {
public:
    wxPieChartData() {}

    void AppendSlice(const wxPieChartSliceData& slice) {
        m_slices.push_back(slice);
    }

    const std::vector<wxPieChartSliceData>& GetSlices() const {
        return m_slices;
    }

private:
    std::vector<wxPieChartSliceData> m_slices;
};

#endif // WXPIECHARTDATA_H
