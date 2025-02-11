// Generated by commsdsl2tools_qt v7.0.3

#include "Frame.h"

#include "cc_mqtt5/frame/Frame.h"
#include "cc_tools_qt/ToolsFrameBase.h"
#include "cc_tools_qt_plugin/Message/cc_mqtt5/Message.h"
#include "cc_tools_qt_plugin/Message/cc_mqtt5/factory/MsgFactory.h"
#include "cc_tools_qt_plugin/Message/cc_mqtt5/frame/FrameTransportMessage.h"
#include "cc_tools_qt_plugin/cc_mqtt5/Version.h"
#include "cc_tools_qt_plugin/cc_mqtt5/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_mqtt5
{

namespace frame
{

namespace
{
using ProtFrame =
    ::cc_mqtt5::frame::Frame<
        cc_tools_qt_plugin::Message::cc_mqtt5::Message::ProtInterface,
        ::cc_mqtt5::input::AllMessages<cc_tools_qt_plugin::Message::cc_mqtt5::Message::ProtInterface, cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>,
        cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions
     >;
}// namespace

class FrameImpl : public
   cc_tools_qt::ToolsFrameBase<
       cc_tools_qt_plugin::Message::cc_mqtt5::Message,
       ProtFrame,
       cc_tools_qt_plugin::Message::cc_mqtt5::factory::MsgFactory,
       cc_tools_qt_plugin::Message::cc_mqtt5::frame::FrameTransportMessage
   >
{
};

Frame::Frame() :
    m_pImpl(new FrameImpl){
}

Frame::~Frame() = default;

cc_tools_qt::ToolsMessagesList Frame::readDataImpl(const cc_tools_qt::ToolsDataInfo& dataInfo, bool final)
{
    return m_pImpl->readData(dataInfo, final);
}

void Frame::updateMessageImpl(cc_tools_qt::ToolsMessage& msg)
{
    return m_pImpl->updateMessage(msg);
}

cc_tools_qt::ToolsMessagePtr Frame::createInvalidMessageImpl()
{
    return m_pImpl->createInvalidMessage();
}

cc_tools_qt::ToolsMessagePtr Frame::createRawDataMessageImpl()
{
    return m_pImpl->createRawDataMessage();
}

cc_tools_qt::ToolsMessagePtr Frame::createExtraInfoMessageImpl()
{
    return m_pImpl->createExtraInfoMessage();
}

cc_tools_qt::ToolsMessagesList Frame::createAllMessagesImpl()
{
    return m_pImpl->createAllMessages();
}

cc_tools_qt::ToolsMessagePtr Frame::createMessageImpl(const QString& idAsString, unsigned idx)
{
    return m_pImpl->createMessage(idAsString, idx);
}

Frame::DataSeq Frame::writeProtMsgImpl(const void* protInterface)
{
    return m_pImpl->writeProtMsg(protInterface);
}

} // namespace frame

} // namespace cc_mqtt5

} // namespace Message

} // namespace cc_tools_qt_plugin
