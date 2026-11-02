/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00136f60  Symbol: description */

/* cocos2d::CCCamera::description() */

char * __thiscall cocos2d::CCCamera::description(CCCamera *this)

{
  char *__s;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  __s = (char *)operator_new__(100);
  uVar1 = __extendsfdf2(*(undefined4 *)(this + 0x20));
  uVar2 = __extendsfdf2(*(undefined4 *)(this + 0x24));
  uVar3 = __extendsfdf2(*(undefined4 *)(this + 0x28));
  sprintf(__s,(char *)(DAT_00136fa4 + 0x136f96),(int)uVar1,(int)((ulonglong)uVar1 >> 0x20),
          (int)uVar2,(int)((ulonglong)uVar2 >> 0x20),(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  return __s;
}


