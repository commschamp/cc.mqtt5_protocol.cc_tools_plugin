// Generated by commsdsl2tools_qt v6.3.4

#include "Connack.h"

#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqtt5/field/PropertiesList.h"
#include "cc_tools_qt_plugin/cc_mqtt5/field/ReasonCode.h"
#include "cc_tools_qt_plugin/cc_mqtt5/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt5
{

namespace message
{

namespace
{

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqtt5::message::ConnackFields<cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>::Flags;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(0U, "Session Present")
            .asMap();
}

static QVariantMap createProps_reasonCode(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqtt5::message::ConnackFields<cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>::ReasonCode;
    auto props = cc_tools_qt_plugin::cc_mqtt5::field::createProps_reasonCode(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_properties(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqtt5::message::ConnackFields<cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>::Properties;
    auto props = cc_tools_qt_plugin::cc_mqtt5::field::createProps_propertiesList(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_flags(false));
    props.append(createProps_reasonCode(false));
    props.append(createProps_properties(false));
    return props;
}

} // namespace

Connack::Connack() = default;
Connack::~Connack() = default;
Connack& Connack::operator=(const Connack&) = default;
Connack& Connack::operator=(Connack&&) = default;

const QVariantList& Connack::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_mqtt5

} // namespace cc_tools_qt_plugin
