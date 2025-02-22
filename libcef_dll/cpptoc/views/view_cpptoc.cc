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
// $hash=8ea7eff414ea832334a4b3cb92a3efe8a44e9653$
//

#include "libcef_dll/cpptoc/views/view_cpptoc.h"
#include "libcef_dll/cpptoc/views/browser_view_cpptoc.h"
#include "libcef_dll/cpptoc/views/button_cpptoc.h"
#include "libcef_dll/cpptoc/views/label_button_cpptoc.h"
#include "libcef_dll/cpptoc/views/menu_button_cpptoc.h"
#include "libcef_dll/cpptoc/views/panel_cpptoc.h"
#include "libcef_dll/cpptoc/views/scroll_view_cpptoc.h"
#include "libcef_dll/cpptoc/views/textfield_cpptoc.h"
#include "libcef_dll/cpptoc/views/window_cpptoc.h"
#include "libcef_dll/ctocpp/views/view_delegate_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

cef_browser_view_t* CEF_CALLBACK
view_as_browser_view(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefBrowserView> _retval = CefViewCppToC::Get(self)->AsBrowserView();

  // Return type: refptr_same
  return CefBrowserViewCppToC::Wrap(_retval);
}

cef_button_t* CEF_CALLBACK view_as_button(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefButton> _retval = CefViewCppToC::Get(self)->AsButton();

  // Return type: refptr_same
  return CefButtonCppToC::Wrap(_retval);
}

cef_panel_t* CEF_CALLBACK view_as_panel(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefPanel> _retval = CefViewCppToC::Get(self)->AsPanel();

  // Return type: refptr_same
  return CefPanelCppToC::Wrap(_retval);
}

cef_scroll_view_t* CEF_CALLBACK view_as_scroll_view(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefScrollView> _retval = CefViewCppToC::Get(self)->AsScrollView();

  // Return type: refptr_same
  return CefScrollViewCppToC::Wrap(_retval);
}

cef_textfield_t* CEF_CALLBACK view_as_textfield(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefTextfield> _retval = CefViewCppToC::Get(self)->AsTextfield();

  // Return type: refptr_same
  return CefTextfieldCppToC::Wrap(_retval);
}

cef_string_userfree_t CEF_CALLBACK
view_get_type_string(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefString _retval = CefViewCppToC::Get(self)->GetTypeString();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_string_userfree_t CEF_CALLBACK view_to_string(struct _cef_view_t* self,
                                                  int include_children) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefString _retval =
      CefViewCppToC::Get(self)->ToString(include_children ? true : false);

  // Return type: string
  return _retval.DetachToUserFree();
}

int CEF_CALLBACK view_is_valid(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefViewCppToC::Get(self)->IsValid();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK view_is_attached(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefViewCppToC::Get(self)->IsAttached();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK view_is_same(struct _cef_view_t* self,
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
  bool _retval = CefViewCppToC::Get(self)->IsSame(CefViewCppToC::Unwrap(that));

  // Return type: bool
  return _retval;
}

struct _cef_view_delegate_t* CEF_CALLBACK
view_get_delegate(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefViewDelegate> _retval = CefViewCppToC::Get(self)->GetDelegate();

  // Return type: refptr_diff
  return CefViewDelegateCToCpp::Unwrap(_retval);
}

struct _cef_window_t* CEF_CALLBACK view_get_window(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefWindow> _retval = CefViewCppToC::Get(self)->GetWindow();

  // Return type: refptr_same
  return CefWindowCppToC::Wrap(_retval);
}

int CEF_CALLBACK view_get_id(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  int _retval = CefViewCppToC::Get(self)->GetID();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK view_set_id(struct _cef_view_t* self, int id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefViewCppToC::Get(self)->SetID(id);
}

int CEF_CALLBACK view_get_group_id(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  int _retval = CefViewCppToC::Get(self)->GetGroupID();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK view_set_group_id(struct _cef_view_t* self, int group_id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefViewCppToC::Get(self)->SetGroupID(group_id);
}

struct _cef_view_t* CEF_CALLBACK
view_get_parent_view(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefView> _retval = CefViewCppToC::Get(self)->GetParentView();

  // Return type: refptr_same
  return CefViewCppToC::Wrap(_retval);
}

struct _cef_view_t* CEF_CALLBACK view_get_view_for_id(struct _cef_view_t* self,
                                                      int id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefView> _retval = CefViewCppToC::Get(self)->GetViewForID(id);

  // Return type: refptr_same
  return CefViewCppToC::Wrap(_retval);
}

void CEF_CALLBACK view_set_bounds(struct _cef_view_t* self,
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
  CefViewCppToC::Get(self)->SetBounds(boundsVal);
}

cef_rect_t CEF_CALLBACK view_get_bounds(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefRect();
  }

  // Execute
  cef_rect_t _retval = CefViewCppToC::Get(self)->GetBounds();

  // Return type: simple
  return _retval;
}

cef_rect_t CEF_CALLBACK view_get_bounds_in_screen(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefRect();
  }

  // Execute
  cef_rect_t _retval = CefViewCppToC::Get(self)->GetBoundsInScreen();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK view_set_size(struct _cef_view_t* self,
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
  CefViewCppToC::Get(self)->SetSize(sizeVal);
}

cef_size_t CEF_CALLBACK view_get_size(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefSize();
  }

  // Execute
  cef_size_t _retval = CefViewCppToC::Get(self)->GetSize();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK view_set_position(struct _cef_view_t* self,
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
  CefViewCppToC::Get(self)->SetPosition(positionVal);
}

cef_point_t CEF_CALLBACK view_get_position(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefPoint();
  }

  // Execute
  cef_point_t _retval = CefViewCppToC::Get(self)->GetPosition();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK view_set_insets(struct _cef_view_t* self,
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
  CefViewCppToC::Get(self)->SetInsets(insetsVal);
}

cef_insets_t CEF_CALLBACK view_get_insets(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefInsets();
  }

  // Execute
  cef_insets_t _retval = CefViewCppToC::Get(self)->GetInsets();

  // Return type: simple
  return _retval;
}

cef_size_t CEF_CALLBACK view_get_preferred_size(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefSize();
  }

  // Execute
  cef_size_t _retval = CefViewCppToC::Get(self)->GetPreferredSize();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK view_size_to_preferred_size(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefViewCppToC::Get(self)->SizeToPreferredSize();
}

cef_size_t CEF_CALLBACK view_get_minimum_size(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefSize();
  }

  // Execute
  cef_size_t _retval = CefViewCppToC::Get(self)->GetMinimumSize();

  // Return type: simple
  return _retval;
}

cef_size_t CEF_CALLBACK view_get_maximum_size(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefSize();
  }

  // Execute
  cef_size_t _retval = CefViewCppToC::Get(self)->GetMaximumSize();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK view_get_height_for_width(struct _cef_view_t* self,
                                           int width) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  int _retval = CefViewCppToC::Get(self)->GetHeightForWidth(width);

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK view_invalidate_layout(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefViewCppToC::Get(self)->InvalidateLayout();
}

void CEF_CALLBACK view_set_visible(struct _cef_view_t* self, int visible) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefViewCppToC::Get(self)->SetVisible(visible ? true : false);
}

int CEF_CALLBACK view_is_visible(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefViewCppToC::Get(self)->IsVisible();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK view_is_drawn(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefViewCppToC::Get(self)->IsDrawn();

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK view_set_enabled(struct _cef_view_t* self, int enabled) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefViewCppToC::Get(self)->SetEnabled(enabled ? true : false);
}

int CEF_CALLBACK view_is_enabled(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefViewCppToC::Get(self)->IsEnabled();

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK view_set_focusable(struct _cef_view_t* self, int focusable) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefViewCppToC::Get(self)->SetFocusable(focusable ? true : false);
}

int CEF_CALLBACK view_is_focusable(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefViewCppToC::Get(self)->IsFocusable();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK view_is_accessibility_focusable(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefViewCppToC::Get(self)->IsAccessibilityFocusable();

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK view_request_focus(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefViewCppToC::Get(self)->RequestFocus();
}

void CEF_CALLBACK view_set_background_color(struct _cef_view_t* self,
                                            cef_color_t color) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefViewCppToC::Get(self)->SetBackgroundColor(color);
}

cef_color_t CEF_CALLBACK view_get_background_color(struct _cef_view_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  cef_color_t _retval = CefViewCppToC::Get(self)->GetBackgroundColor();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK view_convert_point_to_screen(struct _cef_view_t* self,
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
  bool _retval = CefViewCppToC::Get(self)->ConvertPointToScreen(pointVal);

  // Restore param: point; type: simple_byref
  if (point) {
    *point = pointVal;
  }

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK view_convert_point_from_screen(struct _cef_view_t* self,
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
  bool _retval = CefViewCppToC::Get(self)->ConvertPointFromScreen(pointVal);

  // Restore param: point; type: simple_byref
  if (point) {
    *point = pointVal;
  }

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK view_convert_point_to_window(struct _cef_view_t* self,
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
  bool _retval = CefViewCppToC::Get(self)->ConvertPointToWindow(pointVal);

  // Restore param: point; type: simple_byref
  if (point) {
    *point = pointVal;
  }

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK view_convert_point_from_window(struct _cef_view_t* self,
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
  bool _retval = CefViewCppToC::Get(self)->ConvertPointFromWindow(pointVal);

  // Restore param: point; type: simple_byref
  if (point) {
    *point = pointVal;
  }

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK view_convert_point_to_view(struct _cef_view_t* self,
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
  bool _retval = CefViewCppToC::Get(self)->ConvertPointToView(
      CefViewCppToC::Unwrap(view), pointVal);

  // Restore param: point; type: simple_byref
  if (point) {
    *point = pointVal;
  }

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK view_convert_point_from_view(struct _cef_view_t* self,
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
  bool _retval = CefViewCppToC::Get(self)->ConvertPointFromView(
      CefViewCppToC::Unwrap(view), pointVal);

  // Restore param: point; type: simple_byref
  if (point) {
    *point = pointVal;
  }

  // Return type: bool
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefViewCppToC::CefViewCppToC() {
  GetStruct()->as_browser_view = view_as_browser_view;
  GetStruct()->as_button = view_as_button;
  GetStruct()->as_panel = view_as_panel;
  GetStruct()->as_scroll_view = view_as_scroll_view;
  GetStruct()->as_textfield = view_as_textfield;
  GetStruct()->get_type_string = view_get_type_string;
  GetStruct()->to_string = view_to_string;
  GetStruct()->is_valid = view_is_valid;
  GetStruct()->is_attached = view_is_attached;
  GetStruct()->is_same = view_is_same;
  GetStruct()->get_delegate = view_get_delegate;
  GetStruct()->get_window = view_get_window;
  GetStruct()->get_id = view_get_id;
  GetStruct()->set_id = view_set_id;
  GetStruct()->get_group_id = view_get_group_id;
  GetStruct()->set_group_id = view_set_group_id;
  GetStruct()->get_parent_view = view_get_parent_view;
  GetStruct()->get_view_for_id = view_get_view_for_id;
  GetStruct()->set_bounds = view_set_bounds;
  GetStruct()->get_bounds = view_get_bounds;
  GetStruct()->get_bounds_in_screen = view_get_bounds_in_screen;
  GetStruct()->set_size = view_set_size;
  GetStruct()->get_size = view_get_size;
  GetStruct()->set_position = view_set_position;
  GetStruct()->get_position = view_get_position;
  GetStruct()->set_insets = view_set_insets;
  GetStruct()->get_insets = view_get_insets;
  GetStruct()->get_preferred_size = view_get_preferred_size;
  GetStruct()->size_to_preferred_size = view_size_to_preferred_size;
  GetStruct()->get_minimum_size = view_get_minimum_size;
  GetStruct()->get_maximum_size = view_get_maximum_size;
  GetStruct()->get_height_for_width = view_get_height_for_width;
  GetStruct()->invalidate_layout = view_invalidate_layout;
  GetStruct()->set_visible = view_set_visible;
  GetStruct()->is_visible = view_is_visible;
  GetStruct()->is_drawn = view_is_drawn;
  GetStruct()->set_enabled = view_set_enabled;
  GetStruct()->is_enabled = view_is_enabled;
  GetStruct()->set_focusable = view_set_focusable;
  GetStruct()->is_focusable = view_is_focusable;
  GetStruct()->is_accessibility_focusable = view_is_accessibility_focusable;
  GetStruct()->request_focus = view_request_focus;
  GetStruct()->set_background_color = view_set_background_color;
  GetStruct()->get_background_color = view_get_background_color;
  GetStruct()->convert_point_to_screen = view_convert_point_to_screen;
  GetStruct()->convert_point_from_screen = view_convert_point_from_screen;
  GetStruct()->convert_point_to_window = view_convert_point_to_window;
  GetStruct()->convert_point_from_window = view_convert_point_from_window;
  GetStruct()->convert_point_to_view = view_convert_point_to_view;
  GetStruct()->convert_point_from_view = view_convert_point_from_view;
}

// DESTRUCTOR - Do not edit by hand.

CefViewCppToC::~CefViewCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefView>
CefCppToCRefCounted<CefViewCppToC, CefView, cef_view_t>::UnwrapDerived(
    CefWrapperType type,
    cef_view_t* s) {
  if (type == WT_BROWSER_VIEW) {
    return CefBrowserViewCppToC::Unwrap(
        reinterpret_cast<cef_browser_view_t*>(s));
  }
  if (type == WT_BUTTON) {
    return CefButtonCppToC::Unwrap(reinterpret_cast<cef_button_t*>(s));
  }
  if (type == WT_LABEL_BUTTON) {
    return CefLabelButtonCppToC::Unwrap(
        reinterpret_cast<cef_label_button_t*>(s));
  }
  if (type == WT_MENU_BUTTON) {
    return CefMenuButtonCppToC::Unwrap(reinterpret_cast<cef_menu_button_t*>(s));
  }
  if (type == WT_PANEL) {
    return CefPanelCppToC::Unwrap(reinterpret_cast<cef_panel_t*>(s));
  }
  if (type == WT_SCROLL_VIEW) {
    return CefScrollViewCppToC::Unwrap(reinterpret_cast<cef_scroll_view_t*>(s));
  }
  if (type == WT_TEXTFIELD) {
    return CefTextfieldCppToC::Unwrap(reinterpret_cast<cef_textfield_t*>(s));
  }
  if (type == WT_WINDOW) {
    return CefWindowCppToC::Unwrap(reinterpret_cast<cef_window_t*>(s));
  }
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType
    CefCppToCRefCounted<CefViewCppToC, CefView, cef_view_t>::kWrapperType =
        WT_VIEW;
