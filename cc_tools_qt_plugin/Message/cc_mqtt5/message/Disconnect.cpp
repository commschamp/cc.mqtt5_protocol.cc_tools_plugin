// Generated by commsdsl2tools_qt v7.0.0

#include "Disconnect.h"

#include "cc_mqtt5/message/Disconnect.h"
#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_mqtt5/Message.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_mqtt5
{

namespace message
{

class DisconnectImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_mqtt5::Message,
        ::cc_mqtt5::message::Disconnect,
        DisconnectImpl
    >
{
public:
    DisconnectImpl() = default;
    DisconnectImpl(const DisconnectImpl&) = default;
    DisconnectImpl(DisconnectImpl&&) = default;
    virtual ~DisconnectImpl() = default;
    DisconnectImpl& operator=(const DisconnectImpl&) = default;
    DisconnectImpl& operator=(DisconnectImpl&&) = default;
};

Disconnect::Disconnect() : m_pImpl(new DisconnectImpl) {}
Disconnect::~Disconnect() = default;

Disconnect& Disconnect::operator=(const Disconnect& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Disconnect& Disconnect::operator=(Disconnect&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Disconnect::nameImpl() const
{
    return m_pImpl->name();
}

bool Disconnect::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong Disconnect::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString Disconnect::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void Disconnect::resetImpl()
{
    m_pImpl->reset();
}

bool Disconnect::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const Disconnect*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool Disconnect::isValidImpl() const
{
    return m_pImpl->isValid();
}

Disconnect::DataSeq Disconnect::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool Disconnect::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

Disconnect::Ptr Disconnect::cloneImpl() const
{
    ImplPtr impl(static_cast<DisconnectImpl*>(m_pImpl->clone().release()));
    return Ptr(new Disconnect(std::move(impl)));
}

void Disconnect::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

Disconnect::DataSeq Disconnect::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

Disconnect::FieldsList Disconnect::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

Disconnect::FieldsList Disconnect::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

Disconnect::Disconnect(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_mqtt5

} // namespace Message

} // namespace cc_tools_qt_plugin
