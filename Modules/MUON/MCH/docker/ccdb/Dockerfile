FROM openjdk:17

RUN curl -LO http://alimonitor.cern.ch/download/local.jar

ENV TOMCAT_PORT=6565

ENV TOMCAT_ADDRESS *

ENTRYPOINT ["java","-jar","local.jar" ]

EXPOSE 6565
