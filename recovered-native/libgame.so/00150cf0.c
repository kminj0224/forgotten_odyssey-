/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00150cf0  Symbol: beginWithClear */

/* cocos2d::CCRenderTexture::beginWithClear(float, float, float, float) */

undefined8 __thiscall
cocos2d::CCRenderTexture::beginWithClear
          (CCRenderTexture *this,float param_1,float param_2,float param_3,float param_4)

{
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 in_stack_00000000;
  CCRenderTexture *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = this;
  local_1c = in_r1;
  local_18 = in_r2;
  local_14 = in_r3;
  begin(this);
  glGetFloatv(DAT_00150d28,&local_20);
  glClearColor(in_r1,in_r2,in_r3,in_stack_00000000);
  glClear(0x4100);
  glClearColor(local_20,local_1c,local_18,local_14);
  return CONCAT44(local_1c,local_20);
}


