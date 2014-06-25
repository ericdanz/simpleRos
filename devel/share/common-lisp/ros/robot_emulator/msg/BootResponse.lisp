; Auto-generated. Do not edit!


(cl:in-package robot_emulator-msg)


;//! \htmlinclude BootResponse.msg.html

(cl:defclass <BootResponse> (roslisp-msg-protocol:ros-message)
  ((gatetype
    :reader gatetype
    :initarg :gatetype
    :type cl:string
    :initform ""))
)

(cl:defclass BootResponse (<BootResponse>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <BootResponse>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'BootResponse)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robot_emulator-msg:<BootResponse> is deprecated: use robot_emulator-msg:BootResponse instead.")))

(cl:ensure-generic-function 'gatetype-val :lambda-list '(m))
(cl:defmethod gatetype-val ((m <BootResponse>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_emulator-msg:gatetype-val is deprecated.  Use robot_emulator-msg:gatetype instead.")
  (gatetype m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <BootResponse>) ostream)
  "Serializes a message object of type '<BootResponse>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'gatetype))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'gatetype))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <BootResponse>) istream)
  "Deserializes a message object of type '<BootResponse>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'gatetype) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'gatetype) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<BootResponse>)))
  "Returns string type for a message object of type '<BootResponse>"
  "robot_emulator/BootResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'BootResponse)))
  "Returns string type for a message object of type 'BootResponse"
  "robot_emulator/BootResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<BootResponse>)))
  "Returns md5sum for a message object of type '<BootResponse>"
  "83703fe760d68777d2fe1cc8d6241172")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'BootResponse)))
  "Returns md5sum for a message object of type 'BootResponse"
  "83703fe760d68777d2fe1cc8d6241172")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<BootResponse>)))
  "Returns full string definition for message of type '<BootResponse>"
  (cl:format cl:nil "string gatetype~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'BootResponse)))
  "Returns full string definition for message of type 'BootResponse"
  (cl:format cl:nil "string gatetype~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <BootResponse>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'gatetype))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <BootResponse>))
  "Converts a ROS message object to a list"
  (cl:list 'BootResponse
    (cl:cons ':gatetype (gatetype msg))
))
