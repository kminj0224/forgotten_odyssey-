/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015e54a  Symbol: call_zseek64 */

/* cocos2d::call_zseek64(cocos2d::zlib_filefunc64_32_def_s const*, void*, unsigned long long, int)
    */

undefined4 __thiscall
cocos2d::call_zseek64
          (cocos2d *this,zlib_filefunc64_32_def_s *param_1,void *param_2,ulonglong param_3,
          int param_4)

{
  undefined4 uVar1;
  
  if (*(code **)(this + 0x10) == (code *)0x0) {
    if (param_4 == 0) {
      uVar1 = (**(code **)(this + 0x28))
                        (*(undefined4 *)(this + 0x1c),param_1,param_2,(undefined4)param_3,this,
                         param_1,param_2);
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = (**(code **)(this + 0x10))(*(undefined4 *)(this + 0x1c));
  }
  return uVar1;
}


