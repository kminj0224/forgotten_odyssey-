/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146904  Symbol: ~CCKeypadHandler */

/* cocos2d::CCKeypadHandler::~CCKeypadHandler() */

CCKeypadHandler * __thiscall cocos2d::CCKeypadHandler::~CCKeypadHandler(CCKeypadHandler *this)

{
  CCObject *this_00;
  
  *(int *)this = *(int *)(DAT_0014693c + 0x14690e) + 8;
  if (*(int *)(this + 0x14) != 0) {
    this_00 = (CCObject *)
              __dynamic_cast(*(int *)(this + 0x14),*(undefined4 *)(DAT_00146940 + 0x146922),
                             *(undefined4 *)(DAT_00146944 + 0x146924),0xfffffffe);
    CCObject::release(this_00);
  }
  CCObject::~CCObject((CCObject *)this);
  return this;
}


