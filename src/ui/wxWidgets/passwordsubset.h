/*
 * Copyright (c) 2003-2016 Rony Shapiro <ronys@pwsafe.org>.
 * All rights reserved. Use of the code is allowed under the
 * Artistic License 2.0 terms, as specified in the LICENSE file
 * distributed with this code, or available from
 * http://www.opensource.org/licenses/artistic-license-2.0.php
 */

/** \file passwordsubset.h
* 
*/


#ifndef _PASSWORDSUBSET_H_
#define _PASSWORDSUBSET_H_


/*!
 * Includes
 */

////@begin includes
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_CPASSWORDSUBSET 10000
#define ID_TEXTCTRL 10001
#define ID_TEXTCTRL1 10002
#define ID_BITMAPBUTTON 10003
#define SYMBOL_CPASSWORDSUBSET_STYLE wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxCLOSE_BOX|wxTAB_TRAVERSAL
#define SYMBOL_CPASSWORDSUBSET_TITLE _("Show a subset of the Password")
#define SYMBOL_CPASSWORDSUBSET_IDNAME ID_CPASSWORDSUBSET
#define SYMBOL_CPASSWORDSUBSET_SIZE wxSize(400, 300)
#define SYMBOL_CPASSWORDSUBSET_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * CPasswordSubset class declaration
 */

class CPasswordSubset: public wxDialog
{    
  DECLARE_DYNAMIC_CLASS( CPasswordSubset )
  DECLARE_EVENT_TABLE()

public:
  /// Constructors
  CPasswordSubset();
  CPasswordSubset( wxWindow* parent, wxWindowID id = SYMBOL_CPASSWORDSUBSET_IDNAME, const wxString& caption = SYMBOL_CPASSWORDSUBSET_TITLE, const wxPoint& pos = SYMBOL_CPASSWORDSUBSET_POSITION, const wxSize& size = SYMBOL_CPASSWORDSUBSET_SIZE, long style = SYMBOL_CPASSWORDSUBSET_STYLE );

  /// Creation
  bool Create( wxWindow* parent, wxWindowID id = SYMBOL_CPASSWORDSUBSET_IDNAME, const wxString& caption = SYMBOL_CPASSWORDSUBSET_TITLE, const wxPoint& pos = SYMBOL_CPASSWORDSUBSET_POSITION, const wxSize& size = SYMBOL_CPASSWORDSUBSET_SIZE, long style = SYMBOL_CPASSWORDSUBSET_STYLE );

  /// Destructor
  ~CPasswordSubset();

  /// Initialises member variables
  void Init();

  /// Creates the controls and sizers
  void CreateControls();

////@begin CPasswordSubset event handler declarations

////@end CPasswordSubset event handler declarations

////@begin CPasswordSubset member function declarations

  /// Retrieves bitmap resources
  wxBitmap GetBitmapResource( const wxString& name );

  /// Retrieves icon resources
  wxIcon GetIconResource( const wxString& name );
////@end CPasswordSubset member function declarations

  /// Should we show tooltips?
  static bool ShowToolTips();

////@begin CPasswordSubset member variables
////@end CPasswordSubset member variables
};

#endif
  // _PASSWORDSUBSET_H_