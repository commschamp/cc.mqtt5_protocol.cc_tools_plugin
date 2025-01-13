// Generated by commsdsl2tools_qt v7.0.0

#pragma once

#include <memory>
#include "cc_tools_qt/ToolsMessage.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_mqtt5
{

namespace message
{

class ConnectImpl;
class Connect : public cc_tools_qt::ToolsMessage
{
public:
    Connect();
    Connect(const Connect&) = delete;
    Connect(Connect&&) = delete;
    virtual ~Connect();
    Connect& operator=(const Connect& other);
    Connect& operator=(Connect&&);

protected:
    virtual const char* nameImpl() const override;
    virtual bool refreshMsgImpl() override;
    virtual qlonglong numericIdImpl() const override;
    virtual QString idAsStringImpl() const override;
    virtual void resetImpl() override;
    virtual bool assignImpl(const cc_tools_qt::ToolsMessage& other) override;
    virtual bool isValidImpl() const override;
    virtual DataSeq encodeDataImpl() const override;
    virtual bool decodeDataImpl(const DataSeq& data) override;
    virtual Ptr cloneImpl() const override;
    virtual void assignProtMessageImpl(void* protMsg) override;
    virtual DataSeq encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const override;
    virtual FieldsList transportFieldsImpl() override;
    virtual FieldsList payloadFieldsImpl() override;

private:
    using ImplPtr = std::unique_ptr<ConnectImpl>;

    Connect(ImplPtr&& impl);

    ImplPtr m_pImpl;
};

} // namespace message

} // namespace cc_mqtt5

} // namespace Message

} // namespace cc_tools_qt_plugin
