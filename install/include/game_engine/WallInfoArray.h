// Generated by gencpp from file game_engine/WallInfoArray.msg
// DO NOT EDIT!


#ifndef GAME_ENGINE_MESSAGE_WALLINFOARRAY_H
#define GAME_ENGINE_MESSAGE_WALLINFOARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <game_engine/WallInfo.h>

namespace game_engine
{
template <class ContainerAllocator>
struct WallInfoArray_
{
  typedef WallInfoArray_<ContainerAllocator> Type;

  WallInfoArray_()
    : wall()  {
    }
  WallInfoArray_(const ContainerAllocator& _alloc)
    : wall(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::game_engine::WallInfo_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::game_engine::WallInfo_<ContainerAllocator> >::other >  _wall_type;
  _wall_type wall;





  typedef boost::shared_ptr< ::game_engine::WallInfoArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::game_engine::WallInfoArray_<ContainerAllocator> const> ConstPtr;

}; // struct WallInfoArray_

typedef ::game_engine::WallInfoArray_<std::allocator<void> > WallInfoArray;

typedef boost::shared_ptr< ::game_engine::WallInfoArray > WallInfoArrayPtr;
typedef boost::shared_ptr< ::game_engine::WallInfoArray const> WallInfoArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::game_engine::WallInfoArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::game_engine::WallInfoArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace game_engine

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'game_engine': ['/home/sergio/teste420/src/game_engine/msg'], 'geometry_msgs': ['/opt/ros/lunar/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/lunar/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::game_engine::WallInfoArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::game_engine::WallInfoArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::game_engine::WallInfoArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::game_engine::WallInfoArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::game_engine::WallInfoArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::game_engine::WallInfoArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::game_engine::WallInfoArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "00bbbcfc52895902500308e3cbae4262";
  }

  static const char* value(const ::game_engine::WallInfoArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x00bbbcfc52895902ULL;
  static const uint64_t static_value2 = 0x500308e3cbae4262ULL;
};

template<class ContainerAllocator>
struct DataType< ::game_engine::WallInfoArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "game_engine/WallInfoArray";
  }

  static const char* value(const ::game_engine::WallInfoArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::game_engine::WallInfoArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "WallInfo[] wall\n\
\n\
================================================================================\n\
MSG: game_engine/WallInfo\n\
int8 id\n\
int8 cluster\n\
int16 x1\n\
int16 x2\n\
int16 y1\n\
int16 y2\n\
float64 xc\n\
float64 yc\n\
int8 life\n\
bool vertical\n\
";
  }

  static const char* value(const ::game_engine::WallInfoArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::game_engine::WallInfoArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.wall);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WallInfoArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::game_engine::WallInfoArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::game_engine::WallInfoArray_<ContainerAllocator>& v)
  {
    s << indent << "wall[]" << std::endl;
    for (size_t i = 0; i < v.wall.size(); ++i)
    {
      s << indent << "  wall[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::game_engine::WallInfo_<ContainerAllocator> >::stream(s, indent + "    ", v.wall[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAME_ENGINE_MESSAGE_WALLINFOARRAY_H