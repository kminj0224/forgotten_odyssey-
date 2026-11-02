/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00157544  Symbol: _initWithRawData */

/* cocos2d::CCImage::_initWithRawData(void*, int, int, int, int) */

void * __thiscall
cocos2d::CCImage::_initWithRawData
          (CCImage *this,void *param_1,int param_2,int param_3,int param_4,int param_5)

{
  void *__dest;
  uint __n;
  
  if ((param_4 == 0) || (param_3 == 0)) {
    __dest = (void *)0x0;
  }
  else {
    __n = param_4 * param_3 * 4;
    *(int *)(this + 8) = param_5;
    *(short *)(this + 6) = (short)param_4;
    *(short *)(this + 4) = (short)param_3;
    this[0x10] = (CCImage)0x1;
    __dest = operator_new__(__n);
    *(void **)(this + 0xc) = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_1,__n);
      __dest = (void *)0x1;
    }
  }
  return __dest;
}


