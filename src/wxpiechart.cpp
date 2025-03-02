/*
    Copyright (c) 2016-2019 Xavier Leclercq and the wxCharts contributors

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
    IN THE SOFTWARE.
*/

#include "wx/charts/wxpiechart.h"
#include "wx/charts/wxchartstheme.h"

wxPieChart::wxPieChart(wxPieChartData::ptr data, const wxSize &size)
    : wxDoughnutAndPieChartBase(data, size) 
{
    m_options = wxSharedPtr<wxPieChartOptions>(new wxPieChartOptions());
}

wxPieChart::wxPieChart(wxPieChartData::ptr data, wxSharedPtr<wxPieChartOptions> &options, const wxSize &size)
    : wxDoughnutAndPieChartBase(data, size),
      m_options(options) {}

const wxChartCommonOptions& wxPieChart::GetCommonOptions() const
{
    return m_options->GetCommonOptions();
}

const wxDoughnutAndPieChartOptionsBase& wxPieChart::GetOptions() const
{
    return *m_options;
}

void wxPieChart::DoSetSize(const wxSize &size) {
    // Provide actual implementation
}

void wxPieChart::DoFit() {
    // Provide actual implementation
}

void wxPieChart::DoDraw(wxGraphicsContext &gc, bool suppressTooltips) {
    // Provide actual implementation
}

wxSharedPtr<wxVector<const wxChartsElement*>> wxPieChart::GetActiveElements(const wxPoint &point) {
    // Provide actual implementation
    return wxSharedPtr<wxVector<const wxChartsElement*>>();
}
