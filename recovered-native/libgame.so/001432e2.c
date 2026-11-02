/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001432e2  Symbol: CCAffineTransformEqualToTransform */

/* cocos2d::CCAffineTransformEqualToTransform(cocos2d::CCAffineTransform const&,
   cocos2d::CCAffineTransform const&) */

bool cocos2d::CCAffineTransformEqualToTransform
               (CCAffineTransform *param_1,CCAffineTransform *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = __aeabi_fcmpeq(*(undefined4 *)param_1,*(undefined4 *)param_2);
  if ((((iVar1 == 0) ||
       (iVar1 = __aeabi_fcmpeq(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4)),
       iVar1 == 0)) ||
      (iVar1 = __aeabi_fcmpeq(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8)), iVar1 == 0
      )) || ((iVar1 = __aeabi_fcmpeq(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_2 + 0xc)),
             iVar1 == 0 ||
             (iVar1 = __aeabi_fcmpeq(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x10)
                                    ), iVar1 == 0)))) {
    bVar2 = false;
  }
  else {
    iVar1 = __aeabi_fcmpeq(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_2 + 0x14));
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}


