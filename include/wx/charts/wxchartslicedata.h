#ifndef WX_CHARTS_WXCHARTSLICEDATA_H
#define WX_CHARTS_WXCHARTSLICEDATA_H

#include <wx/string.h>  // For wxString
#include <wx/colour.h>  // For wxColor
#include <wx/gdicmn.h>  // For wxBLACK

class wxChartSliceData
{
public:
    /// Constructs a wxChartSliceData instance.
    /// @param value The value of the slice.
    /// @param color The slice will be filled with this color.
    /// @param label The label of the slice. 
    /// @param tooltip The text shown in tooltips.

    // Default constructor
    wxChartSliceData()
        : m_value(0), m_color(wxColour(0, 0, 0)), m_label(""), m_toolTip("") {}

    // Parameterized constructor
    wxChartSliceData(double value, const wxColor &color, const wxString &label);
         

    double GetValue() const;
    void SetValue(double value);
    const wxColor& GetColor() const;
    const wxString& GetLabel() const;
    wxString GetTooltipText() const;

private:
    double m_value;
    wxColor m_color;
    wxString m_label;
    wxString m_toolTip; // Note: The member variable is named m_toolTip, not m_tooltip
};

#endif  // WX_CHARTS_WXCHARTSLICEDATA_H
