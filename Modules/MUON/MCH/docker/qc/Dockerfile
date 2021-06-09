FROM centos:8 

RUN printf '%s\n' \
'[alisw-el8]' \
'name=ALICE Software - EL8' \
'baseurl=https://alirepo.web.cern.ch/alirepo/RPMS/el8.x86_64' \
'enabled=1' \
'gpgcheck=0' \
'' \
> /etc/yum.repos.d/alisw-el8.repo && \
curl -LO https://download-ib01.fedoraproject.org/pub/epel/8/Everything/x86_64/Packages/g/glfw-3.3-2.el8.x86_64.rpm  && yum install -y glfw-3.3-2.el8.x86_64.rpm && \
yum install -y alisw-QualityControl+v1.18.1-1


