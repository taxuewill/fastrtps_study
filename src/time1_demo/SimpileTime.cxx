// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*! 
 * @file SimpileTime.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "SimpileTime.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

SimpleTimeRequest::SimpleTimeRequest()
{
    m_remote_time = 0;


}

SimpleTimeRequest::~SimpleTimeRequest()
{
}

SimpleTimeRequest::SimpleTimeRequest(const SimpleTimeRequest &x)
{
    m_remote_time = x.m_remote_time;
}

SimpleTimeRequest::SimpleTimeRequest(SimpleTimeRequest &&x)
{
    m_remote_time = x.m_remote_time;
}

SimpleTimeRequest& SimpleTimeRequest::operator=(const SimpleTimeRequest &x)
{
    m_remote_time = x.m_remote_time;

    return *this;
}

SimpleTimeRequest& SimpleTimeRequest::operator=(SimpleTimeRequest &&x)
{
    m_remote_time = x.m_remote_time;

    return *this;
}

size_t SimpleTimeRequest::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    return current_alignment - initial_alignment;
}

size_t SimpleTimeRequest::getCdrSerializedSize(const SimpleTimeRequest& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    return current_alignment - initial_alignment;
}

void SimpleTimeRequest::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m_remote_time;
}

void SimpleTimeRequest::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m_remote_time;
}

size_t SimpleTimeRequest::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
	size_t current_align = current_alignment;
            

    return current_align;
}

bool SimpleTimeRequest::isKeyDefined()
{
    return false;
}

void SimpleTimeRequest::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
	(void) scdr;
	 
}