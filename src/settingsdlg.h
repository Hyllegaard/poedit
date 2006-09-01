/*
 *  This file is part of poEdit (http://www.poedit.org)
 *
 *  Copyright (C) 2000-2005 Vaclav Slavik
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a
 *  copy of this software and associated documentation files (the "Software"),
 *  to deal in the Software without restriction, including without limitation
 *  the rights to use, copy, modify, merge, publish, distribute, sublicense,
 *  and/or sell copies of the Software, and to permit persons to whom the
 *  Software is furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 *  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 *  DEALINGS IN THE SOFTWARE.
 *
 *  $Id$
 *
 *  Catalog settings dialog
 *
 */

#ifndef _SETTINGSDLG_H_
#define _SETTINGSDLG_H_

#include <wx/dialog.h>
#include <wx/notebook.h>

#include "catalog.h"

class WXDLLEXPORT wxEditableListBox;
class WXDLLEXPORT wxTextCtrl;
class WXDLLEXPORT wxComboBox;

/// Dialog setting various catalog parameters.
class SettingsDialog : public wxDialog
{
    public:
        SettingsDialog(wxWindow *parent = NULL);

        /// Reads data from the catalog and fill dialog's controls.
        void TransferTo(Catalog *cat);

        /// Saves data from the dialog to the catalog.
        void TransferFrom(Catalog *cat);
            
    private:
        wxTextCtrl *m_team, *m_teamEmail, *m_project;            
        wxComboBox *m_charset, *m_language, *m_country, *m_sourceCodeCharset;
        wxTextCtrl *m_pluralForms;
        wxTextCtrl *m_basePath;
        wxEditableListBox *m_paths, *m_keywords;
};



#endif // _SETTINGSDLG_H_