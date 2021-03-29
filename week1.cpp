#include <stdio.h>
 main()
 { int i;
 printf("hay cho toi biet thoi tiet hom nay\n");
 printf("vui long nhap so tuong ung:\n");
 printf("1.nang \n2.mua\n3.ret\n4.am\n5.mat\n");
 scanf("%d", &i);
 if (i==1) { printf("moi ban coi tran");
 } else if (i==2) {printf("mac ao mua hoac cam o");
 } else if (i==3) {printf("mac ao bong quan dai");
 } else if (i==4) {printf("mac ao dai mong tay thoi");
 } else if (i==5) {printf("mac ao coc");
 } else {printf("ban muon mac gi thi mac");
 }
 return 0;
  
 }
