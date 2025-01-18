// Generated by commsdsl2tools_qt v7.0.2

#include "Publish.h"

#include "cc_mqtt5/message/Publish.h"
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

class PublishImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_mqtt5::Message,
        ::cc_mqtt5::message::Publish,
        PublishImpl
    >
{
public:
    PublishImpl() = default;
    PublishImpl(const PublishImpl&) = default;
    PublishImpl(PublishImpl&&) = default;
    virtual ~PublishImpl() = default;
    PublishImpl& operator=(const PublishImpl&) = default;
    PublishImpl& operator=(PublishImpl&&) = default;
};

Publish::Publish() : m_pImpl(new PublishImpl) {}
Publish::~Publish() = default;

Publish& Publish::operator=(const Publish& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Publish& Publish::operator=(Publish&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Publish::nameImpl() const
{
    return m_pImpl->name();
}

bool Publish::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong Publish::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString Publish::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void Publish::resetImpl()
{
    m_pImpl->reset();
}

bool Publish::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const Publish*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool Publish::isValidImpl() const
{
    return m_pImpl->isValid();
}

Publish::DataSeq Publish::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool Publish::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

Publish::Ptr Publish::cloneImpl() const
{
    ImplPtr impl(static_cast<PublishImpl*>(m_pImpl->clone().release()));
    return Ptr(new Publish(std::move(impl)));
}

void Publish::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

Publish::DataSeq Publish::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

Publish::FieldsList Publish::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

Publish::FieldsList Publish::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

Publish::Publish(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_mqtt5

} // namespace Message

} // namespace cc_tools_qt_plugin
