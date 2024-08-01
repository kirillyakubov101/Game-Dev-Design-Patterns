#include "Subject.h"

std::vector<std::weak_ptr<ISubscriber>> Subject::m_Subscribers;