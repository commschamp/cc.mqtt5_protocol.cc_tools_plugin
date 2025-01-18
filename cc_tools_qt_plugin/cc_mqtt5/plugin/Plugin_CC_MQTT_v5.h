// Generated by commsdsl2tools_qt v7.0.2

#pragma once

#include "cc_tools_qt/ToolsPlugin.h"

#include <QtCore/QObject>
#include <QtCore/QtPlugin>

namespace cc_tools_qt_plugin
{

namespace cc_mqtt5
{

namespace plugin
{

class Plugin_CC_MQTT_v5 : public cc_tools_qt::ToolsPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "cc.Mqtt5ProtocolPlugin" FILE "Plugin_CC_MQTT_v5.json")
    Q_INTERFACES(cc_tools_qt::ToolsPlugin)
    using Base = cc_tools_qt::ToolsPlugin;

public:
    Plugin_CC_MQTT_v5();
    virtual ~Plugin_CC_MQTT_v5();

protected:
    virtual cc_tools_qt::ToolsProtocolPtr createProtocolImpl() override;
};

} // namespace plugin

} // namespace cc_mqtt5

} // namespace cc_tools_qt_plugin
