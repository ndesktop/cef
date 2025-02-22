// Copyright (c) 2023 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=8ed7a2cd363a38cde65551fa5366085d9fa5b919$
//

#include "libcef_dll/cpptoc/views/browser_view_cpptoc.h"
#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/dictionary_value_cpptoc.h"
#include "libcef_dll/cpptoc/request_context_cpptoc.h"
#include "libcef_dll/cpptoc/views/button_cpptoc.h"
#include "libcef_dll/cpptoc/views/panel_cpptoc.h"
#include "libcef_dll/cpptoc/views/scroll_view_cpptoc.h"
#include "libcef_dll/cpptoc/views/textfield_cpptoc.h"
#include "libcef_dll/cpptoc/views/view_cpptoc.h"
#include "libcef_dll/cpptoc/views/window_cpptoc.h"
#include "libcef_dll/ctocpp/client_ctocpp.h"
#include "libcef_dll/ctocpp/views/browser_view_delegate_ctocpp.h"
#include "libcef_dll/ctocpp/views/view_delegate_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"
#include "libcef_dll/template_util.h"

// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_browser_view_t* cef_browser_view_create(
    cef_client_t* client,
    const cef_string_t* url,
    const struct _cef_browser_settings_t* settings,
    cef_dictionary_value_t* extra_info,
    cef_request_context_t* request_context,
    cef_browser_view_delegate_t* delegate) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: settings; type: struct_byref_const
  DCHECK(settings);
  if (!settings) {
    return NULL;
  }
  if (!template_util::has_valid_size(settings)) {
    DCHECK(false) << "invalid settings->[base.]size";
    return NULL;
  }
  // Unverified params: client, url, extra_info, request_context, delegate

  // Translate param: settings; type: struct_byref_const
  CefBrowserSettings settingsObj;
  if (settings) {
    settingsObj.Set(*settings, false);
  }

  // Execute
  CefRefPtr<CefBrowserView> _retval = CefBrowserView::CreateBrowserView(
      CefClientCToCpp::Wrap(client), CefString(url), settingsObj,
      CefDictionaryValueCppToC::Unwrap(extra_info),
      CefRequestContextCppToC::Unwrap(request_context),
      CefBrowserViewDelegateCToCpp::Wrap(delegate));

  // Return type: refptr_same
  return CefBrowserViewCppToC::Wrap(_retval);
}

CEF_EXPORT cef_browser_view_t* cef_browser_view_get_for_browser(
    cef_browser_t* browser) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_same
  DCHECK(browser);
  if (!browser) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefBrowserView> _retval =
      CefBrowserView::GetForBrowser(CefBrowserCppToC::Unwrap(browser));

  // Return type: refptr_same
  return CefBrowserViewCppToC::Wrap(_retval);
}

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

cef_browser_t* CEF_CALLBACK
browser_view_get_browser(struct _cef_browser_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefBrowser> _retval = CefBrowserViewCppToC::Get(self)->GetBrowser();

  // Return type: refptr_same
  return CefBrowserCppToC::Wrap(_retval);
}

struct _cef_view_t* CEF_CALLBACK
browser_view_get_chrome_toolbar(struct _cef_browser_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefView> _retval =
      CefBrowserViewCppToC::Get(self)->GetChromeToolbar();

  // Return type: refptr_same
  return CefViewCppToC::Wrap(_retval);
}

void CEF_CALLBACK
browser_view_set_prefer_accelerators(struct _cef_browser_view_t* self,
                                     int prefer_accelerators) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefBrowserViewCppToC::Get(self)->SetPreferAccelerators(
      prefer_accelerators ? true : false);
}

cef_browser_view_t* CEF_CALLBACK
browser_view_as_browser_view(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefBrowserView> _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->AsBrowserView();

  // Return type: refptr_same
  return CefBrowserViewCppToC::Wrap(_retval);
}

cef_button_t* CEF_CALLBACK browser_view_as_button(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefButton> _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->AsButton();

  // Return type: refptr_same
  return CefButtonCppToC::Wrap(_retval);
}

cef_panel_t* CEF_CALLBACK browser_view_as_panel(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefPanel> _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->AsPanel();

  // Return type: refptr_same
  return CefPanelCppToC::Wrap(_retval);
}

cef_scroll_view_t* CEF_CALLBACK
browser_view_as_scroll_view(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefScrollView> _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->AsScrollView();

  // Return type: refptr_same
  return CefScrollViewCppToC::Wrap(_retval);
}

cef_textfield_t* CEF_CALLBACK
browser_view_as_textfield(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefTextfield> _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->AsTextfield();

  // Return type: refptr_same
  return CefTextfieldCppToC::Wrap(_retval);
}

cef_string_userfree_t CEF_CALLBACK
browser_view_get_type_string(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefString _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->GetTypeString();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_string_userfree_t CEF_CALLBACK
browser_view_to_string(struct _cef_view_t* self, int include_children) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefString _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->ToString(include_children ? true : false);

  // Return type: string
  return _retval.DetachToUserFree();
}

int CEF_CALLBACK browser_view_is_valid(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->IsValid();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK browser_view_is_attached(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->IsAttached();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK browser_view_is_same(struct _cef_view_t* self,
                                      struct _cef_view_t* that) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: that; type: refptr_same
  DCHECK(that);
  if (!that) {
    return 0;
  }

  // Execute
  bool _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->IsSame(CefViewCppToC::Unwrap(that));

  // Return type: bool
  return _retval;
}

struct _cef_view_delegate_t* CEF_CALLBACK
browser_view_get_delegate(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefViewDelegate> _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->GetDelegate();

  // Return type: refptr_diff
  return CefViewDelegateCToCpp::Unwrap(_retval);
}

struct _cef_window_t* CEF_CALLBACK
browser_view_get_window(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefWindow> _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->GetWindow();

  // Return type: refptr_same
  return CefWindowCppToC::Wrap(_retval);
}

int CEF_CALLBACK browser_view_get_id(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  int _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->GetID();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK browser_view_set_id(struct _cef_view_t* self, int id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
      ->SetID(id);
}

int CEF_CALLBACK browser_view_get_group_id(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  int _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->GetGroupID();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK browser_view_set_group_id(struct _cef_view_t* self,
                                            int group_id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
      ->SetGroupID(group_id);
}

struct _cef_view_t* CEF_CALLBACK
browser_view_get_parent_view(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefView> _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->GetParentView();

  // Return type: refptr_same
  return CefViewCppToC::Wrap(_retval);
}

struct _cef_view_t* CEF_CALLBACK
browser_view_get_view_for_id(struct _cef_view_t* self, int id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefView> _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->GetViewForID(id);

  // Return type: refptr_same
  return CefViewCppToC::Wrap(_retval);
}

void CEF_CALLBACK browser_view_set_bounds(struct _cef_view_t* self,
                                          const cef_rect_t* bounds) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: bounds; type: simple_byref_const
  DCHECK(bounds);
  if (!bounds) {
    return;
  }

  // Translate param: bounds; type: simple_byref_const
  CefRect boundsVal = bounds ? *bounds : CefRect();

  // Execute
  CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
      ->SetBounds(boundsVal);
}

cef_rect_t CEF_CALLBACK browser_view_get_bounds(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefRect();
  }

  // Execute
  cef_rect_t _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->GetBounds();

  // Return type: simple
  return _retval;
}

cef_rect_t CEF_CALLBACK
browser_view_get_bounds_in_screen(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefRect();
  }

  // Execute
  cef_rect_t _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->GetBoundsInScreen();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK browser_view_set_size(struct _cef_view_t* self,
                                        const cef_size_t* size) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: size; type: simple_byref_const
  DCHECK(size);
  if (!size) {
    return;
  }

  // Translate param: size; type: simple_byref_const
  CefSize sizeVal = size ? *size : CefSize();

  // Execute
  CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
      ->SetSize(sizeVal);
}

cef_size_t CEF_CALLBACK browser_view_get_size(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefSize();
  }

  // Execute
  cef_size_t _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->GetSize();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK browser_view_set_position(struct _cef_view_t* self,
                                            const cef_point_t* position) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: position; type: simple_byref_const
  DCHECK(position);
  if (!position) {
    return;
  }

  // Translate param: position; type: simple_byref_const
  CefPoint positionVal = position ? *position : CefPoint();

  // Execute
  CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
      ->SetPosition(positionVal);
}

cef_point_t CEF_CALLBACK browser_view_get_position(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefPoint();
  }

  // Execute
  cef_point_t _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->GetPosition();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK browser_view_set_insets(struct _cef_view_t* self,
                                          const cef_insets_t* insets) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: insets; type: simple_byref_const
  DCHECK(insets);
  if (!insets) {
    return;
  }

  // Translate param: insets; type: simple_byref_const
  CefInsets insetsVal = insets ? *insets : CefInsets();

  // Execute
  CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
      ->SetInsets(insetsVal);
}

cef_insets_t CEF_CALLBACK browser_view_get_insets(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefInsets();
  }

  // Execute
  cef_insets_t _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->GetInsets();

  // Return type: simple
  return _retval;
}

cef_size_t CEF_CALLBACK
browser_view_get_preferred_size(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefSize();
  }

  // Execute
  cef_size_t _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->GetPreferredSize();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK
browser_view_size_to_preferred_size(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
      ->SizeToPreferredSize();
}

cef_size_t CEF_CALLBACK
browser_view_get_minimum_size(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefSize();
  }

  // Execute
  cef_size_t _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->GetMinimumSize();

  // Return type: simple
  return _retval;
}

cef_size_t CEF_CALLBACK
browser_view_get_maximum_size(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefSize();
  }

  // Execute
  cef_size_t _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->GetMaximumSize();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK browser_view_get_height_for_width(struct _cef_view_t* self,
                                                   int width) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  int _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->GetHeightForWidth(width);

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK browser_view_invalidate_layout(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
      ->InvalidateLayout();
}

void CEF_CALLBACK browser_view_set_visible(struct _cef_view_t* self,
                                           int visible) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
      ->SetVisible(visible ? true : false);
}

int CEF_CALLBACK browser_view_is_visible(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->IsVisible();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK browser_view_is_drawn(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->IsDrawn();

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK browser_view_set_enabled(struct _cef_view_t* self,
                                           int enabled) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
      ->SetEnabled(enabled ? true : false);
}

int CEF_CALLBACK browser_view_is_enabled(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->IsEnabled();

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK browser_view_set_focusable(struct _cef_view_t* self,
                                             int focusable) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
      ->SetFocusable(focusable ? true : false);
}

int CEF_CALLBACK browser_view_is_focusable(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->IsFocusable();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
browser_view_is_accessibility_focusable(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->IsAccessibilityFocusable();

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK browser_view_request_focus(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
      ->RequestFocus();
}

void CEF_CALLBACK browser_view_set_background_color(struct _cef_view_t* self,
                                                    cef_color_t color) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
      ->SetBackgroundColor(color);
}

cef_color_t CEF_CALLBACK
browser_view_get_background_color(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  cef_color_t _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->GetBackgroundColor();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK browser_view_convert_point_to_screen(struct _cef_view_t* self,
                                                      cef_point_t* point) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: point; type: simple_byref
  DCHECK(point);
  if (!point) {
    return 0;
  }

  // Translate param: point; type: simple_byref
  CefPoint pointVal = point ? *point : CefPoint();

  // Execute
  bool _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->ConvertPointToScreen(pointVal);

  // Restore param: point; type: simple_byref
  if (point) {
    *point = pointVal;
  }

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
browser_view_convert_point_from_screen(struct _cef_view_t* self,
                                       cef_point_t* point) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: point; type: simple_byref
  DCHECK(point);
  if (!point) {
    return 0;
  }

  // Translate param: point; type: simple_byref
  CefPoint pointVal = point ? *point : CefPoint();

  // Execute
  bool _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->ConvertPointFromScreen(pointVal);

  // Restore param: point; type: simple_byref
  if (point) {
    *point = pointVal;
  }

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK browser_view_convert_point_to_window(struct _cef_view_t* self,
                                                      cef_point_t* point) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: point; type: simple_byref
  DCHECK(point);
  if (!point) {
    return 0;
  }

  // Translate param: point; type: simple_byref
  CefPoint pointVal = point ? *point : CefPoint();

  // Execute
  bool _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->ConvertPointToWindow(pointVal);

  // Restore param: point; type: simple_byref
  if (point) {
    *point = pointVal;
  }

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
browser_view_convert_point_from_window(struct _cef_view_t* self,
                                       cef_point_t* point) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: point; type: simple_byref
  DCHECK(point);
  if (!point) {
    return 0;
  }

  // Translate param: point; type: simple_byref
  CefPoint pointVal = point ? *point : CefPoint();

  // Execute
  bool _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->ConvertPointFromWindow(pointVal);

  // Restore param: point; type: simple_byref
  if (point) {
    *point = pointVal;
  }

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK browser_view_convert_point_to_view(struct _cef_view_t* self,
                                                    struct _cef_view_t* view,
                                                    cef_point_t* point) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: view; type: refptr_same
  DCHECK(view);
  if (!view) {
    return 0;
  }
  // Verify param: point; type: simple_byref
  DCHECK(point);
  if (!point) {
    return 0;
  }

  // Translate param: point; type: simple_byref
  CefPoint pointVal = point ? *point : CefPoint();

  // Execute
  bool _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->ConvertPointToView(CefViewCppToC::Unwrap(view), pointVal);

  // Restore param: point; type: simple_byref
  if (point) {
    *point = pointVal;
  }

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK browser_view_convert_point_from_view(struct _cef_view_t* self,
                                                      struct _cef_view_t* view,
                                                      cef_point_t* point) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: view; type: refptr_same
  DCHECK(view);
  if (!view) {
    return 0;
  }
  // Verify param: point; type: simple_byref
  DCHECK(point);
  if (!point) {
    return 0;
  }

  // Translate param: point; type: simple_byref
  CefPoint pointVal = point ? *point : CefPoint();

  // Execute
  bool _retval =
      CefBrowserViewCppToC::Get(reinterpret_cast<cef_browser_view_t*>(self))
          ->ConvertPointFromView(CefViewCppToC::Unwrap(view), pointVal);

  // Restore param: point; type: simple_byref
  if (point) {
    *point = pointVal;
  }

  // Return type: bool
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefBrowserViewCppToC::CefBrowserViewCppToC() {
  GetStruct()->get_browser = browser_view_get_browser;
  GetStruct()->get_chrome_toolbar = browser_view_get_chrome_toolbar;
  GetStruct()->set_prefer_accelerators = browser_view_set_prefer_accelerators;
  GetStruct()->base.as_browser_view = browser_view_as_browser_view;
  GetStruct()->base.as_button = browser_view_as_button;
  GetStruct()->base.as_panel = browser_view_as_panel;
  GetStruct()->base.as_scroll_view = browser_view_as_scroll_view;
  GetStruct()->base.as_textfield = browser_view_as_textfield;
  GetStruct()->base.get_type_string = browser_view_get_type_string;
  GetStruct()->base.to_string = browser_view_to_string;
  GetStruct()->base.is_valid = browser_view_is_valid;
  GetStruct()->base.is_attached = browser_view_is_attached;
  GetStruct()->base.is_same = browser_view_is_same;
  GetStruct()->base.get_delegate = browser_view_get_delegate;
  GetStruct()->base.get_window = browser_view_get_window;
  GetStruct()->base.get_id = browser_view_get_id;
  GetStruct()->base.set_id = browser_view_set_id;
  GetStruct()->base.get_group_id = browser_view_get_group_id;
  GetStruct()->base.set_group_id = browser_view_set_group_id;
  GetStruct()->base.get_parent_view = browser_view_get_parent_view;
  GetStruct()->base.get_view_for_id = browser_view_get_view_for_id;
  GetStruct()->base.set_bounds = browser_view_set_bounds;
  GetStruct()->base.get_bounds = browser_view_get_bounds;
  GetStruct()->base.get_bounds_in_screen = browser_view_get_bounds_in_screen;
  GetStruct()->base.set_size = browser_view_set_size;
  GetStruct()->base.get_size = browser_view_get_size;
  GetStruct()->base.set_position = browser_view_set_position;
  GetStruct()->base.get_position = browser_view_get_position;
  GetStruct()->base.set_insets = browser_view_set_insets;
  GetStruct()->base.get_insets = browser_view_get_insets;
  GetStruct()->base.get_preferred_size = browser_view_get_preferred_size;
  GetStruct()->base.size_to_preferred_size =
      browser_view_size_to_preferred_size;
  GetStruct()->base.get_minimum_size = browser_view_get_minimum_size;
  GetStruct()->base.get_maximum_size = browser_view_get_maximum_size;
  GetStruct()->base.get_height_for_width = browser_view_get_height_for_width;
  GetStruct()->base.invalidate_layout = browser_view_invalidate_layout;
  GetStruct()->base.set_visible = browser_view_set_visible;
  GetStruct()->base.is_visible = browser_view_is_visible;
  GetStruct()->base.is_drawn = browser_view_is_drawn;
  GetStruct()->base.set_enabled = browser_view_set_enabled;
  GetStruct()->base.is_enabled = browser_view_is_enabled;
  GetStruct()->base.set_focusable = browser_view_set_focusable;
  GetStruct()->base.is_focusable = browser_view_is_focusable;
  GetStruct()->base.is_accessibility_focusable =
      browser_view_is_accessibility_focusable;
  GetStruct()->base.request_focus = browser_view_request_focus;
  GetStruct()->base.set_background_color = browser_view_set_background_color;
  GetStruct()->base.get_background_color = browser_view_get_background_color;
  GetStruct()->base.convert_point_to_screen =
      browser_view_convert_point_to_screen;
  GetStruct()->base.convert_point_from_screen =
      browser_view_convert_point_from_screen;
  GetStruct()->base.convert_point_to_window =
      browser_view_convert_point_to_window;
  GetStruct()->base.convert_point_from_window =
      browser_view_convert_point_from_window;
  GetStruct()->base.convert_point_to_view = browser_view_convert_point_to_view;
  GetStruct()->base.convert_point_from_view =
      browser_view_convert_point_from_view;
}

// DESTRUCTOR - Do not edit by hand.

CefBrowserViewCppToC::~CefBrowserViewCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefBrowserView>
CefCppToCRefCounted<CefBrowserViewCppToC, CefBrowserView, cef_browser_view_t>::
    UnwrapDerived(CefWrapperType type, cef_browser_view_t* s) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefBrowserViewCppToC,
                                   CefBrowserView,
                                   cef_browser_view_t>::kWrapperType =
    WT_BROWSER_VIEW;
