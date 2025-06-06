// Generated by commsdsl2tools_qt v7.1.0

#include "Pubrec.h"

#include "cc_mqtt5/message/Pubrec.h"
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

class PubrecImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_mqtt5::Message,
        ::cc_mqtt5::message::Pubrec,
        PubrecImpl
    >
{
public:
    PubrecImpl() = default;
    PubrecImpl(const PubrecImpl&) = default;
    PubrecImpl(PubrecImpl&&) = default;
    virtual ~PubrecImpl() = default;
    PubrecImpl& operator=(const PubrecImpl&) = default;
    PubrecImpl& operator=(PubrecImpl&&) = default;
};

Pubrec::Pubrec() : m_pImpl(new PubrecImpl) {}
Pubrec::~Pubrec() = default;

Pubrec& Pubrec::operator=(const Pubrec& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Pubrec& Pubrec::operator=(Pubrec&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Pubrec::nameImpl() const
{
    return m_pImpl->name();
}

bool Pubrec::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong Pubrec::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString Pubrec::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void Pubrec::resetImpl()
{
    m_pImpl->reset();
}

bool Pubrec::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const Pubrec*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool Pubrec::isValidImpl() const
{
    return m_pImpl->isValid();
}

Pubrec::DataSeq Pubrec::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool Pubrec::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

Pubrec::Ptr Pubrec::cloneImpl() const
{
    ImplPtr impl(static_cast<PubrecImpl*>(m_pImpl->clone().release()));
    return Ptr(new Pubrec(std::move(impl)));
}

void Pubrec::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

Pubrec::DataSeq Pubrec::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

Pubrec::FieldsList Pubrec::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

Pubrec::FieldsList Pubrec::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

Pubrec::Pubrec(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_mqtt5

} // namespace Message

} // namespace cc_tools_qt_plugin
