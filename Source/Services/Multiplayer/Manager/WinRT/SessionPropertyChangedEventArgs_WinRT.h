// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#pragma once
#include "MultiplayerEventArgs_WinRT.h"

NAMESPACE_MICROSOFT_XBOX_SERVICES_MULTIPLAYER_MANAGER_BEGIN

/// <summary>
/// Notifies the title when a session property has been added or modified.
/// </summary>
public ref class SessionPropertyChangedEventArgs sealed : MultiplayerEventArgs
{
public:

    /// <summary>
    /// The JSON of the property that changed.
    /// </summary>
    DEFINE_PTR_PROP_GET_STR_FROM_JSON_OBJ(Properties, properties);

internal:
    /// <summary>
    /// Internal function.
    /// </summary>
    SessionPropertyChangedEventArgs(
        _In_ std::shared_ptr<xbox::services::multiplayer::manager::session_property_changed_event_args> cppObj
        );

    std::shared_ptr<xbox::services::multiplayer::manager::session_property_changed_event_args> GetCppObj() const;

private:
    std::shared_ptr<xbox::services::multiplayer::manager::session_property_changed_event_args> m_cppObj;

};

NAMESPACE_MICROSOFT_XBOX_SERVICES_MULTIPLAYER_MANAGER_END
