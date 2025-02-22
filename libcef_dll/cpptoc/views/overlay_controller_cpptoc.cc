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
// $hash=714f6a3397b0c294cf77f23061d07c3e9b548989$
//

#include "libcef_dll/cpptoc/views/overlay_controller_cpptoc.h"
#include "libcef_dll/cpptoc/views/view_cpptoc.h"
#include "libcef_dll/cpptoc/views/window_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK
overlay_controller_is_valid(struct _cef_overlay_controller_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefOverlayControllerCppToC::Get(self)->IsValid();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
overlay_controller_is_same(struct _cef_overlay_controller_t* self,
                           struct _cef_overlay_controller_t* that) {
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
  bool _retval = CefOverlayControllerCppToC::Get(self)->IsSame(
      CefOverlayControllerCppToC::Unwrap(that));

  // Return type: bool
  return _retval;
}

struct _cef_view_t* CEF_CALLBACK
overlay_controller_get_contents_view(struct _cef_overlay_controller_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefView> _retval =
      CefOverlayControllerCppToC::Get(self)->GetContentsView();

  // Return type: refptr_same
  return CefViewCppToC::Wrap(_retval);
}

struct _cef_window_t* CEF_CALLBACK
overlay_controller_get_window(struct _cef_overlay_controller_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefWindow> _retval =
      CefOverlayControllerCppToC::Get(self)->GetWindow();

  // Return type: refptr_same
  return CefWindowCppToC::Wrap(_retval);
}

cef_docking_mode_t CEF_CALLBACK
overlay_controller_get_docking_mode(struct _cef_overlay_controller_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CEF_DOCKING_MODE_TOP_LEFT;
  }

  // Execute
  cef_docking_mode_t _retval =
      CefOverlayControllerCppToC::Get(self)->GetDockingMode();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK
overlay_controller_destroy(struct _cef_overlay_controller_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefOverlayControllerCppToC::Get(self)->Destroy();
}

void CEF_CALLBACK
overlay_controller_set_bounds(struct _cef_overlay_controller_t* self,
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
  CefOverlayControllerCppToC::Get(self)->SetBounds(boundsVal);
}

cef_rect_t CEF_CALLBACK
overlay_controller_get_bounds(struct _cef_overlay_controller_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefRect();
  }

  // Execute
  cef_rect_t _retval = CefOverlayControllerCppToC::Get(self)->GetBounds();

  // Return type: simple
  return _retval;
}

cef_rect_t CEF_CALLBACK overlay_controller_get_bounds_in_screen(
    struct _cef_overlay_controller_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefRect();
  }

  // Execute
  cef_rect_t _retval =
      CefOverlayControllerCppToC::Get(self)->GetBoundsInScreen();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK
overlay_controller_set_size(struct _cef_overlay_controller_t* self,
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
  CefOverlayControllerCppToC::Get(self)->SetSize(sizeVal);
}

cef_size_t CEF_CALLBACK
overlay_controller_get_size(struct _cef_overlay_controller_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefSize();
  }

  // Execute
  cef_size_t _retval = CefOverlayControllerCppToC::Get(self)->GetSize();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK
overlay_controller_set_position(struct _cef_overlay_controller_t* self,
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
  CefOverlayControllerCppToC::Get(self)->SetPosition(positionVal);
}

cef_point_t CEF_CALLBACK
overlay_controller_get_position(struct _cef_overlay_controller_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefPoint();
  }

  // Execute
  cef_point_t _retval = CefOverlayControllerCppToC::Get(self)->GetPosition();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK
overlay_controller_set_insets(struct _cef_overlay_controller_t* self,
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
  CefOverlayControllerCppToC::Get(self)->SetInsets(insetsVal);
}

cef_insets_t CEF_CALLBACK
overlay_controller_get_insets(struct _cef_overlay_controller_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefInsets();
  }

  // Execute
  cef_insets_t _retval = CefOverlayControllerCppToC::Get(self)->GetInsets();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK overlay_controller_size_to_preferred_size(
    struct _cef_overlay_controller_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefOverlayControllerCppToC::Get(self)->SizeToPreferredSize();
}

void CEF_CALLBACK
overlay_controller_set_visible(struct _cef_overlay_controller_t* self,
                               int visible) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefOverlayControllerCppToC::Get(self)->SetVisible(visible ? true : false);
}

int CEF_CALLBACK
overlay_controller_is_visible(struct _cef_overlay_controller_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefOverlayControllerCppToC::Get(self)->IsVisible();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
overlay_controller_is_drawn(struct _cef_overlay_controller_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefOverlayControllerCppToC::Get(self)->IsDrawn();

  // Return type: bool
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefOverlayControllerCppToC::CefOverlayControllerCppToC() {
  GetStruct()->is_valid = overlay_controller_is_valid;
  GetStruct()->is_same = overlay_controller_is_same;
  GetStruct()->get_contents_view = overlay_controller_get_contents_view;
  GetStruct()->get_window = overlay_controller_get_window;
  GetStruct()->get_docking_mode = overlay_controller_get_docking_mode;
  GetStruct()->destroy = overlay_controller_destroy;
  GetStruct()->set_bounds = overlay_controller_set_bounds;
  GetStruct()->get_bounds = overlay_controller_get_bounds;
  GetStruct()->get_bounds_in_screen = overlay_controller_get_bounds_in_screen;
  GetStruct()->set_size = overlay_controller_set_size;
  GetStruct()->get_size = overlay_controller_get_size;
  GetStruct()->set_position = overlay_controller_set_position;
  GetStruct()->get_position = overlay_controller_get_position;
  GetStruct()->set_insets = overlay_controller_set_insets;
  GetStruct()->get_insets = overlay_controller_get_insets;
  GetStruct()->size_to_preferred_size =
      overlay_controller_size_to_preferred_size;
  GetStruct()->set_visible = overlay_controller_set_visible;
  GetStruct()->is_visible = overlay_controller_is_visible;
  GetStruct()->is_drawn = overlay_controller_is_drawn;
}

// DESTRUCTOR - Do not edit by hand.

CefOverlayControllerCppToC::~CefOverlayControllerCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefOverlayController> CefCppToCRefCounted<
    CefOverlayControllerCppToC,
    CefOverlayController,
    cef_overlay_controller_t>::UnwrapDerived(CefWrapperType type,
                                             cef_overlay_controller_t* s) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefOverlayControllerCppToC,
                                   CefOverlayController,
                                   cef_overlay_controller_t>::kWrapperType =
    WT_OVERLAY_CONTROLLER;
