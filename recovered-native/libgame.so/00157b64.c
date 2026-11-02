/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00157b64  Symbol: getBitmapFromJava */

/* cocos2d::BitmapDC::getBitmapFromJava(char const*, int, int, cocos2d::CCImage::ETextAlign, char
   const*, float) */

int __thiscall
cocos2d::BitmapDC::getBitmapFromJava
          (BitmapDC *this,char *param_1,int param_2,int param_3,ETextAlign param_4,char *param_5,
          float param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_stack_00000008;
  undefined4 uVar5;
  int *local_24;
  _jmethodID *local_20;
  undefined4 local_1c;
  
  iVar1 = JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_24,(char *)(DAT_00157bf0 + 0x157b78),
                     (char *)(DAT_00157bf4 + 0x157b7a),(char *)(DAT_00157bf8 + 0x157b7c));
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*local_24 + 0x29c))(local_24,param_1);
    uVar3 = (**(code **)(*local_24 + 0x29c))(local_24,param_5);
    uVar5 = uVar3;
    uVar4 = __fixsfsi(in_stack_00000008);
    _JNIEnv::CallStaticVoidMethod
              ((_jclass *)local_24,local_20,local_1c,uVar2,uVar5,uVar4,param_4,param_2,param_3);
    (**(code **)(*local_24 + 0x5c))(local_24,uVar2);
    (**(code **)(*local_24 + 0x5c))(local_24,uVar3);
    (**(code **)(*local_24 + 0x5c))(local_24,local_20);
    iVar1 = 1;
  }
  return iVar1;
}


