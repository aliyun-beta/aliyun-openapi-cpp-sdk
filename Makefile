.PHONY:all
all:
	make -C aliyun-api-aas/2015-07-01
	make -C aliyun-api-ace/2015-07-13
	make -C aliyun-api-ace-ops/2015-09-09
	make -C aliyun-api-alert/2015-08-15
	make -C aliyun-api-batchcompute/2013-01-11
	make -C aliyun-api-batchcompute/2015-06-30
	make -C aliyun-api-bss/2014-07-14
	make -C aliyun-api-cdn/2014-11-11
	make -C aliyun-api-cms/2015-04-20
	make -C aliyun-api-cms/2015-07-29
	make -C aliyun-api-cms/2015-08-01
	make -C aliyun-api-cms/2015-10-20
	make -C aliyun-api-crm/2015-04-08
	make -C aliyun-api-drds/2015-04-13
	make -C aliyun-api-dts/2015-06-29
	make -C aliyun-api-ecs/2014-05-26
	make -C aliyun-api-emr/2015-09-10
	make -C aliyun-api-ess/2014-08-28
	make -C aliyun-api-ocs/2015-03-01
	make -C aliyun-api-oms/2015-02-12
	make -C aliyun-api-ons/2015-10-20
	make -C aliyun-api-ossadmin/2013-07-12
	make -C aliyun-api-ossadmin/2014-03-26
	make -C aliyun-api-ossadmin/2015-03-02
	make -C aliyun-api-ossadmin/2015-05-20
	make -C aliyun-api-ots/2013-09-12
	make -C aliyun-api-otsfinance/2013-09-12
	make -C aliyun-api-otsshihua/2015-10-26
	make -C aliyun-api-pts/2015-08-01
	make -C aliyun-api-push/2015-08-27
	make -C aliyun-api-r-kvstore/2015-01-01
	make -C aliyun-api-ram/2014-02-14
	make -C aliyun-api-ram/2015-05-01
	make -C aliyun-api-rds/2014-08-15
	make -C aliyun-api-rds_region/2014-08-15
	make -C aliyun-api-risk/2015-03-23
	make -C aliyun-api-risk/2015-08-04
	make -C aliyun-api-slb/2013-02-21
	make -C aliyun-api-slb/2014-05-15
	make -C aliyun-api-sts/2015-04-01
	make -C aliyun-api-ubsms/2015-06-23
	make -C aliyun-api-ubsms-inner/2015-06-23
	make -C aliyun-api-yundun/2015-02-27
	make -C aliyun-api-yundun/2015-04-16
	make -C example

.PHONY:clean
clean:
	make -C aliyun-api-aas/2015-07-01 clean
	make -C aliyun-api-ace/2015-07-13 clean
	make -C aliyun-api-ace-ops/2015-09-09 clean
	make -C aliyun-api-alert/2015-08-15 clean
	make -C aliyun-api-batchcompute/2013-01-11 clean
	make -C aliyun-api-batchcompute/2015-06-30 clean
	make -C aliyun-api-bss/2014-07-14 clean
	make -C aliyun-api-cdn/2014-11-11 clean
	make -C aliyun-api-cms/2015-04-20 clean
	make -C aliyun-api-cms/2015-07-29 clean
	make -C aliyun-api-cms/2015-08-01 clean
	make -C aliyun-api-cms/2015-10-20 clean
	make -C aliyun-api-crm/2015-04-08 clean
	make -C aliyun-api-drds/2015-04-13 clean
	make -C aliyun-api-dts/2015-06-29 clean
	make -C aliyun-api-ecs/2014-05-26 clean
	make -C aliyun-api-emr/2015-09-10 clean
	make -C aliyun-api-ess/2014-08-28 clean
	make -C aliyun-api-ocs/2015-03-01 clean
	make -C aliyun-api-oms/2015-02-12 clean
	make -C aliyun-api-ons/2015-10-20 clean
	make -C aliyun-api-ossadmin/2013-07-12 clean
	make -C aliyun-api-ossadmin/2014-03-26 clean
	make -C aliyun-api-ossadmin/2015-03-02 clean
	make -C aliyun-api-ossadmin/2015-05-20 clean
	make -C aliyun-api-ots/2013-09-12 clean
	make -C aliyun-api-otsfinance/2013-09-12 clean
	make -C aliyun-api-otsshihua/2015-10-26 clean
	make -C aliyun-api-pts/2015-08-01 clean
	make -C aliyun-api-push/2015-08-27 clean
	make -C aliyun-api-r-kvstore/2015-01-01 clean
	make -C aliyun-api-ram/2014-02-14 clean
	make -C aliyun-api-ram/2015-05-01 clean
	make -C aliyun-api-rds/2014-08-15 clean
	make -C aliyun-api-rds_region/2014-08-15 clean
	make -C aliyun-api-risk/2015-03-23 clean
	make -C aliyun-api-risk/2015-08-04 clean
	make -C aliyun-api-slb/2013-02-21 clean
	make -C aliyun-api-slb/2014-05-15 clean
	make -C aliyun-api-sts/2015-04-01 clean
	make -C aliyun-api-ubsms/2015-06-23 clean
	make -C aliyun-api-ubsms-inner/2015-06-23 clean
	make -C aliyun-api-yundun/2015-02-27 clean
	make -C aliyun-api-yundun/2015-04-16 clean
	make -C example clean
