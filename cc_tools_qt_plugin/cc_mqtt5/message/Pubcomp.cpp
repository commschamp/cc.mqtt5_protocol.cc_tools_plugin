// Generated by commsdsl2tools_qt v6.3.2

#include "Pubcomp.h"

#include "cc_mqtt5/field/PropertiesList.h"
#include "cc_mqtt5/field/Property.h"
#include "cc_mqtt5/field/ReasonCode.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqtt5/field/BinData.h"
#include "cc_tools_qt_plugin/cc_mqtt5/field/EnableEnum.h"
#include "cc_tools_qt_plugin/cc_mqtt5/field/PacketId.h"
#include "cc_tools_qt_plugin/cc_mqtt5/field/PropertiesList.h"
#include "cc_tools_qt_plugin/cc_mqtt5/field/Property.h"
#include "cc_tools_qt_plugin/cc_mqtt5/field/Qos.h"
#include "cc_tools_qt_plugin/cc_mqtt5/field/ReasonCode.h"
#include "cc_tools_qt_plugin/cc_mqtt5/field/String.h"
#include "cc_tools_qt_plugin/cc_mqtt5/field/VarLenInt.h"
#include "cc_tools_qt_plugin/cc_mqtt5/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt5
{

namespace message
{

namespace
{

static QVariantMap createProps_packetId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqtt5::message::PubcompFields<cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>::PacketId;
    auto props = cc_tools_qt_plugin::cc_mqtt5::field::createProps_packetId(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_reasonCode(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqtt5::message::PubcompFields<cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>::ReasonCode;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .field(cc_tools_qt_plugin::cc_mqtt5::field::createProps_reasonCode("Reason Code", serHidden))
            .asMap();
}

static QVariantMap createProps_properties(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqtt5::message::PubcompFields<cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>::Properties;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .field(cc_tools_qt_plugin::cc_mqtt5::field::createProps_propertiesList("Properties", serHidden))
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_packetId(false));
    props.append(createProps_reasonCode(false));
    props.append(createProps_properties(false));
    return props;
}

} // namespace

Pubcomp::Pubcomp() = default;
Pubcomp::~Pubcomp() = default;
Pubcomp& Pubcomp::operator=(const Pubcomp&) = default;
Pubcomp& Pubcomp::operator=(Pubcomp&&) = default;

const QVariantList& Pubcomp::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_mqtt5

} // namespace cc_tools_qt_plugin
