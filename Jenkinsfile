// Uses Declarative syntax to run commands inside a container.
pipeline {
    agent {
        kubernetes {
            yaml '''
apiVersion: v1
kind: Pod
spec:
  containers:
  - name: python310
    image: conanio/gcc10:1.52.0
    command:
    - sleep
    args:
    - infinity
'''
            defaultContainer 'python310'
        }
    }
    stages {
        stage('Main') {
            steps {
                sh 'hostname'
                sh 'pwd'
                sh 'ls -la'
                sh 'python --version'
                sh 'pip install conan'
                sh 'conan create .'
            }
        }
    }
}
