#define __SEED__                    static_cast<unsigned int>(0x1 ^ (__LINE__ * (__COUNTER__ + 0x1))) << 24   | \
                                    static_cast<unsigned int>(0x2 ^ (__LINE__ * (__COUNTER__ + 0x1))) << 16   | \
                                    static_cast<unsigned int>(0x3 ^ (__LINE__ * (__COUNTER__ + 0x1))) << 8    | \
                                    static_cast<unsigned int>(0x4 ^ (__LINE__ * (__COUNTER__ + 0x1)))

#define __RAND__                    (static_cast<unsigned int>(__TIME__[7] * __TIME__[6]) << 24   | \
	                                 static_cast<unsigned int>(__TIME__[5] * __TIME__[4]) << 16   | \
                                     static_cast<unsigned int>(__TIME__[3] * __TIME__[2]) << 8    | \
                                     static_cast<unsigned int>(__TIME__[1] * __TIME__[0])) ^ __SEED__
