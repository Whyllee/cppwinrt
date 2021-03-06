// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Media.Core.Preview.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_c50898f6_c536_5f47_8583_8b2c2438a13b
#define WINRT_GENERIC_c50898f6_c536_5f47_8583_8b2c2438a13b
template <> struct __declspec(uuid("c50898f6-c536-5f47-8583-8b2c2438a13b")) __declspec(novtable) EventHandler<Windows::Foundation::IInspectable> : impl_EventHandler<Windows::Foundation::IInspectable> {};
#endif


}

namespace Windows::Media::Core::Preview {

struct ISoundLevelBrokerStatics :
    Windows::Foundation::IInspectable,
    impl::consume<ISoundLevelBrokerStatics>
{
    ISoundLevelBrokerStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
